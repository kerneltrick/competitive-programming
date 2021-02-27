#include <stdio.h>
#include <math.h>
#include <climits>
#include <tuple>
#include <utility>
#include <vector>
#define INF 100000000 


void floyd_warshall(int n, int **distance){

	for (int k = 0; k < n; ++k){
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				if(distance[i][j] > distance[i][k] + distance[k][j] && distance[i][k] < INF && distance[k][j] < INF)
					distance[i][j] = distance[i][k] + distance[k][j];
				//distance[i][j] = std::min(distance[i][j], distance[i][k] + distance[k][j]);
			}
		}

	}

}	

int main(){
	//Input first line
	int n=0;
	int m=0;
       	int numQueries=0;
	scanf("%d %d %d", &n, &m, &numQueries);
	while((n + m + numQueries) != 0){//End with line of zeros as input

		//Distance matrix holds lengths of shortest paths between nodes
		int *distance [n] ; 
		for(int i = 0; i < n; ++i){
			distance[i] = new int[n];
			for(int j = 0; j < n; ++j)
				distance[i][j] = (i == j?0:INF);//Builds distance matrix
		}
		//Initialize matrix to shortest edges between nodes
		for(int i = 0; i < m; ++i){
			int a, b, w;
			scanf("%d %d %d", &a, &b, &w);//Edge input
			distance[a][b] = std::min(w, distance[a][b]); 
		}

		//All pairs shortest paths algorithm
		floyd_warshall(n, distance);

		//Format graph to include negative cycles
		for(int i = 0; i < n; ++i){
			for(int j=0; j < n; ++j){
				for(int k=0; distance[i][j] != -INF && k<n; ++k){
					//Only handle nodes that are connected to negative cycle
					if(distance[k][k] < 0 && distance[i][k] != INF && distance[k][j] != INF) 
						distance[i][j] = -INF;
				}
			}
		}
		//Queries
		int origin=0;
		int target=0;
		int pathDist=0;
		for(int i = 0; i < numQueries; ++i){
			//Input query
			scanf("%d %d", &origin, &target );
			//Get shortest path
			pathDist = distance[origin][target];
			//Format output
			if(pathDist == -INF )
				printf("-Infinity\n");
			else if(pathDist == INF)
				printf("Impossible\n");
			else
				printf("%d\n", pathDist);
		}	
		printf("\n");
		scanf("%d %d %d", &n, &m, &numQueries);//Input
	}
	return 0;

}

