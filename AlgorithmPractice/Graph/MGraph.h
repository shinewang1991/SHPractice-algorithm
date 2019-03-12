//
//  MGraph.h
//  AlgorithmPractice
//
//  Created by Shine on 2019/1/29.
//  Copyright © 2019 shine. All rights reserved.
//

#ifndef MGraph_h
#define MGraph_h

#include <stdio.h>

#define VertexMax 100
typedef char VertexType;
typedef int EdgeType;

//图
typedef struct GNode *PtrToGNode;
struct GNode{
    int vertexNum,edgeNum;
    VertexType vexs[VertexMax];     //顶点表
    EdgeType arc[VertexMax][VertexMax]; //邻接矩阵，边表
};
typedef PtrToGNode MGraph;


//边
typedef struct EdgeNode *PtrToEdgeNode;
struct EdgeNode{
    int v1,v2;
    EdgeType weight;    //权重
};
typedef PtrToEdgeNode Edge;

#endif /* MGraph_h */

MGraph buildMGraph(void);


