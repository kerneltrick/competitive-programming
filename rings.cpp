#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;


int overlap(double x1, double y1, double r1, double x2, double y2, double r2){
	double yDist = pow((y2-y1),2);
	double xDist = pow((x2-x1),2);
	double euclideanDistance = sqrt(yDist + xDist) ;
	double smallRadius = min(r1, r2);
	double bigRadius = max(r1, r2);
	if( (euclideanDistance < (r1+r2)) && ((smallRadius + euclideanDistance) > bigRadius) )
		return 1;
	return 0;
}

int dfs( vector<int> *adjList, bool *visited, int s){

	if (visited[s])
		return 0;
	visited[s] = true;
       	int count = 1;
	for(auto u : adjList[s])
	       	count += dfs(adjList, visited, u);
	
	return count;
}

int main(){

	//number of rings
	int n;
	cin >> n;

	while(n != -1){
		//list of coordinate radius triplets representing rings
		double rings[n][3]= {0.0};

		//input loop
		for(int i=0; i < n; ++i){
			//x, y, radius
			cin >> rings[i][0] >> rings[i][1] >> rings[i][2];

		}
		//For DFS, we maintain an adjacency list
		vector<int> vertices [n];
		//overlapping graphs are connected
		for(int i = 0; i < (n-1); ++i){
			for(int j = (i+1); j < n; ++j){
				int stuck = overlap(rings[i][0], rings[i][1], rings[i][2], rings[j][0], rings[j][1], rings[j][2]);
				if(stuck == 1){
					vertices[i].push_back(j);
					vertices[j].push_back(i);
				}
			}
		}

		//find largest connected component
		int largestComponent = 1;
		int candidate = 1;

		//DFS also requires a boolean array keeping track of which
		//nodes have been visited during the search
		bool visited [n] = { 0 };
		for(int i = 0; i < n; ++i){
			candidate = dfs(vertices, visited, i);
			if ( candidate > largestComponent)	
				largestComponent = candidate;
		}
		if(largestComponent == 1)
			printf("The largest component contains %d ring.\n", largestComponent);
		else
			printf("The largest component contains %d rings.\n", largestComponent);
		//number of rings
		cin >> n;
	}
	return 0;
}
