//
//  graph.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/1/30.
//  Copyright © 2019 shine. All rights reserved.
//

#include "graph.h"
#include <stdbool.h>
typedef int boolean;
boolean visited[VertexMax];
void DFS(MGraph graph, int i){
    printf("%c\n",graph->vexs[i]);
    visited[i] = true;
    for(int j = 0;j<graph->vertexNum;j++){
        if(graph->arc[i][j] == 1 && !visited[j]){
            DFS(graph, j);
        }
    }
}

void DFSTraverse(MGraph graph){
    for(int i = 0; i < graph->vertexNum; i++){
        visited[i] = false;
    }
    
    printf("请输入要遍历的起始顶点:\n");
    int startVertex;
    scanf("%d",&startVertex);
    DFS(graph, startVertex);
}


