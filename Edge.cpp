#include<bits/stdc++.h>
// #include<>
using namespace std;

#include "Edge.h"
Edge::Edge()
{
}
Edge::Edge(int node1, int node2, string w)
{
    nodeId1 = node1;
    nodeId2 = node2;
    weight = w;
}
