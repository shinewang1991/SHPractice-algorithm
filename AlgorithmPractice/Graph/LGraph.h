//
//  LGraph.h
//  AlgorithmPractice
//
//  Created by Shine on 2019/1/30.
//  Copyright © 2019 shine. All rights reserved.
//

#ifndef LGraph_h
#define LGraph_h

#include <stdio.h>
#define VertexMax 100
typedef int EdgeType;
typedef char VertexType;

//边
typedef struct EdgeNode *PtrToEdgeNode;
struct EdgeNode{
    int v1,v2;
    EdgeType weight;    //权重
};
typedef PtrToEdgeNode Edge;

struct AdjvNode{
    int adgvex;
    EdgeType weight;
    struct AdjvNode *next;
};
typedef struct AdjvNode *PtrToAdjvNode;

typedef struct VetexNode{
    VertexType data;
    PtrToAdjvNode firstNode;
} VertexNode;

typedef VertexNode AdjList[VertexMax];

struct LNode{
    int vertexNum,edgeNum;
    AdjList adjList;
};
typedef struct LNode *PtrToLNode;
typedef PtrToLNode LGraph;


#endif /* LGraph_h */


LGraph buildGraph(void);
