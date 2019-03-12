//
//  LGraph.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/1/30.
//  Copyright © 2019 shine. All rights reserved.
//

#include "LGraph.h"
#include <stdlib.h>
/*
typedef int Vertex;

LGraph createGraph(int vertexNum){
    LGraph graph;
    Vertex v;
    graph = (LGraph)malloc(sizeof(struct LNode));
    graph->vertexNum = vertexNum;
    graph->edgeNum = 0;
    for(v = 0 ; v < vertexNum; v++){
        graph->adjList[v].firstNode = NULL;
    }
    return graph;
}

void insertEdge(LGraph graph, Edge edge){
    PtrToAdjvNode newNode;
    newNode = (PtrToAdjvNode)malloc(sizeof(struct AdjvNode));
    newNode->weight = edge->weight;
    newNode->adgvex = edge->v2;
    
    newNode->next = graph->adjList[edge->v1].firstNode;
    graph->adjList[edge->v1].firstNode = newNode;
    
    //无向图
    newNode = (PtrToAdjvNode)malloc(sizeof(struct AdjvNode));
    newNode->weight = edge->weight;
    newNode->adgvex = edge->v1;
    
    newNode->next = graph->adjList[edge->v2].firstNode;
    graph->adjList[edge->v2].firstNode = newNode;
}

LGraph buildGraph(void){
    LGraph graph;
    Edge edge;
    int vertexNum;
    printf("请输入顶点数:\n");
    scanf("%d",&vertexNum);
    graph = createGraph(vertexNum);
    
    printf("请输入边数:\n");
    scanf("%d",&graph->edgeNum);
    if(graph->edgeNum != 0){
        edge = (Edge)malloc(sizeof(struct EdgeNode));
        for(int i = 0; i<graph->edgeNum;i++){
            printf("请输入要插入的第%d条边",i++);
            scanf("%d %d %d",&edge->v1,&edge->v2,&edge->weight);
            insertEdge(graph, edge);
        }
    }
    
    return graph;
}
*/
