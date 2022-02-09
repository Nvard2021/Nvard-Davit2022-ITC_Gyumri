#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int start;
    int end;
    int weight;
};

struct Graph
{
    int V;
    int E;

    struct Edge *edge;
};

struct Graph *createGraph(int vertex, int edge)
{
    Graph *graph = new Graph;
    graph->V = vertex;
    graph->E = edge;
    graph->edge = new Edge[edge];
    return graph;
}
void print_graph(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = 0;
        cout << j << " ---> " << i + 1 << " = " << arr[i] << endl;
    }
}

void Bellman_ford(struct Graph *graph, int start)
{
    int V = graph->V;
    int E = graph->E;
    int dist[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = INT_MAX;

        dist[start] = 0;
    }

    for (int i = 1; i <= V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int start = graph->edge[j].start;
            int end = graph->edge[j].end;
            int weight = graph->edge[j].weight;
            if (dist[start] != INT_MAX && dist[start] + weight < dist[end])
            {
                dist[end] = dist[start] + weight;
            }
        }
    }

    for (int j = 0; j < E; j++)
    {
        int start = graph->edge[j].start;
        int end = graph->edge[j].end;
        int weight = graph->edge[j].weight;
        if (dist[start] != INT_MAX && dist[start] + weight < dist[end])
        {
            return;
        }
    }
    print_graph(dist, V);

    return;
}

int main()
{

    int vertex = 4;
    int edge = 5;

    struct Graph *graph = createGraph(vertex, edge);
    graph->edge[0].start = 0;
    graph->edge[0].end = 1;
    graph->edge[0].weight = 5;

    graph->edge[1].start = 0;
    graph->edge[1].end = 2;
    graph->edge[1].weight = 4;

    graph->edge[2].start = 1;
    graph->edge[2].end = 3;
    graph->edge[2].weight = 3;

    graph->edge[3].start = 2;
    graph->edge[3].end = 1;
    graph->edge[3].weight = 6;

    graph->edge[4].start = 3;
    graph->edge[4].end = 2;
    graph->edge[4].weight = 2;
    Bellman_ford(graph, 0);
}
