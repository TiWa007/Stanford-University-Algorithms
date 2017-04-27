/*
DFS‐Loop(graph G)
	Global variable t = 0
	[# of nodes processed so far]
	Global variable s = NULL 
	[current source vertex]
	Assume nodes labeled 1 to n
	For i = n down to 1
		if i not yet explored
			s = i
			DFS(G,i)
----------------------------------------
DFS(graph G, node i)
	mark i as explored
	set leader(i) = node s
	for each arc(i,j) in G:
		if j not yet explored
			DFS(G,j)
	t++
	set f(i) = t

*/
#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

#define SIZE 875714 
int S;
int TIME = 0;

void dfs(graph_p graph, int node){
	int i, vertex;
	adjlist_node_p adjListNodePtr = graph->adjListArr[node].head;

	graph->adjListArr[node].explored1 = TRUE;
	graph->adjListArr[node].leader = S;
	for(i = 0; i < adjListPtr.num_members; i++){
		vertex = adjListNodePtr.vertex;
		if(!graph->adjListArr[vertex].explored1)
			dfs(graph, vertex);
	}
	TIME++;
	graph->adjListArr[node].time = TIME;
}

void dfs_loop(graph_p graph){
	S;
	TIME = 0;
	for
}

void main(){
	FILE *inFile = fopen("SCC.txt", "r");
	int start, end;

	graph_p dir_graph = createGraph(SIZE, DIRECTED);

	if(!inFile)
		printf("Fail to open file\n");
	else
		printf("Open file successfully!\n");

	while(fscanf(inFile, "%d %d", &start, &end) != EOF){
		addEdge(dir_graph, start, end);
	}

	printf("\nDIRECTED GRAPH");
    displayGraph(dir_graph);
    destroyGraph(dir_graph);

	fclose(inFile);
}