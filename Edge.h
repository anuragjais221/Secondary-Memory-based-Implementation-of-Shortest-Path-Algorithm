
#ifndef EDGE_H__
#define EDGE_H__
#include<bits/stdc++.h>
using namespace std;
// #include<string>
class Edge
{
public:
    int nodeId1;
    int nodeId2;
    string weight;
    Edge();
    Edge(int node1, int node2, string w);
};
#endif