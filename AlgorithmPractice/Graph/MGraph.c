//
//  MGraph.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/1/29.
//  Copyright © 2019 shine. All rights reserved.
//

#include "MGraph.h"
#include <stdlib.h>
typedef int Vertex; //顶点
#define Infinity 65535
MGraph createMGraph(int vertexNum){
    Vertex v,w;
    MGraph graph;
    graph = (MGraph)malloc(sizeof(struct GNode));
    graph->vertexNum = vertexNum;
    graph->edgeNum = 0;

    //读入顶点信息
    printf("输入顶点信息:\n");
    char vetexs[] = {'A','B','C','D','E','F'};
    for(v = 0; v < graph->vertexNum; v++){
//        scanf("%c\n",&graph->vexs[v]);
        graph->vexs[v] = vetexs[v];
    }
    
    for (v = 0; v < graph->vertexNum; v++) {
        for(w = 0; w < graph->vertexNum; w++){
            graph->arc[v][w] = 0;
            //Or
//            graph->arc[v][w] = Infinity;
        }
    }
    return graph;
}


//插入边
void insertEdge(MGraph graph,Edge edge){
    graph->arc[edge->v1][edge->v2] = edge->weight;
    graph->arc[edge->v2][edge->v1] = edge->weight;
}


MGraph buildMGraph(){
    MGraph graph;
    Edge edge;
    int vertexNum;
    printf("请输入图的顶点数:\n");
    scanf("%d",&vertexNum);
    rewind(stdin);
    graph = createMGraph(vertexNum);
    printf("请输入图的边数:\n");
    scanf("%d",&graph->edgeNum);
    rewind(stdin);
    if(graph->edgeNum!=0){
        edge = (Edge)malloc(sizeof(struct EdgeNode));
        for(int i = 0;i < graph->edgeNum; i++){
            printf("请输入第%d条边\n",i+1);
            scanf("%d%d%d",&edge->v1,&edge->v2,&edge->weight);
            rewind(stdin); 
            insertEdge(graph, edge);
        }
    }
    
    return graph;
    
}


