
#ifndef CELL_H__
#define CELL_H__
#include <bits/stdc++.h>
#include "Block.h"
using namespace std;
class Cell : public Block
{
    pair<int, int> cell_id;
    pair<double, double> cell_min;
    pair<double, double> cell_max;
    int overflow_count;
    bool edge_enabled;
    bool boundary_node_enabled;
    bool boundary_edge_enabled;
    bool cellProcessed;

public:
    Block *block;
    Cell();
    Cell(pair<int, int> cellId, pair<double, double> cellMin, pair<double, double> cellMax);
    int get_cell_overflow_count();
    void update_overflow_count();
    void print_cell();
    void print_cell_files();
    void print_pair(const pair<int, int> p);
    bool is_edge_enabled();
    void update_edge_enabled();
    bool is_boundary_node_enabled();
    void update_boundary_node_enabled();
    bool is_boundary_edge_enabled();
    void update_boundary_edge_enabled();
    void insert_node_to_cell(Node node, pair<int, int> cellId, int blockSize);
    void insert_boundary_node_to_cell(Node node, pair<int, int> cellId, int blockSize);
    void insert_boundary_edge_to_cell(Edge e, pair<int, int> cellId, int blockSize);
    void insert_edge_to_cell(Edge e, pair<int, int> cellId, int blockSize);
    vector<Edge> get_edges_with_in_cell();
    vector<Edge> get_boundary_edges_with_in_cell();
    vector<Node> get_nodes_with_in_cell();
    vector<Node> get_boundary_nodes_with_in_cell();
    bool is_cell_processed();
    void update_cell_processed();
    vector<Edge> read_edges_from_cell_file();
    int digits_only(string s);

};
#endif