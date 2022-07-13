#ifndef NODE_H__
#define NODE_H__
class Node
{
public:
    int id;
    double x;
    double y;
    Node();
    Node(int node_id, double x_pos, double y_pos);
};
#endif