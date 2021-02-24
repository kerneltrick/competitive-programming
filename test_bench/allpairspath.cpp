#include <stdio.h>
#include <math.h>
#include <climits>
#include <tuple>
#include <utility>
#include <vector>
#define INF 100000000 
typedef std::pair<int, int> triplet;
typedef std::pair<int, int> PI;

int bellman_ford(std::vector<triplet> edgeList, int n, int origin, int target){
	int distance[n]; 
	for (int i = 0; i < n; ++i)
		distance[i] = INF;
	distance[origin] = 0;

	for(int i = 0; i < n-1; ++i){
		for (auto e: edgeList){
			int a, b, w;
			std::tie(a, b, w) = e;				
			distance[b] = std::min(distance[b], distance[a] + w);					 	           			}   
	}
			    
	for (auto e: edgeList){
		int a, b, w;
		std::tie(a,b,w) = e;
		if(distance[b] > (distance[a] + w ))
			return -1;
	}
		return distance[target];
		
}

void floyd_warshall(int n, int **adj, int **distance, int origin, int target){

	for (int i = 0; i < n ; ++i)
	{
		for (int j=0; j < n; ++j){
			if(i == j)
				distance[i][j] = 0;
			else if (adj[i][j])
				distance[i][j] = adj[i][j];
			else
				distance[i][j] = INF;
		}
	}	

	for (int k = 0; k < n; ++k){

		for(int i = 0; i < n; ++i){

			for(int j = 0; j < n; ++j){
				distance[i][j] = std::min(distance[i][j], (distance[i][k]  + distance[k][j]));

			}
			//printf("%d " , distance[k][i]);	
		}
		//printf("\n");

	}

}	

int main(){
	int n=0;
	int m=0;
       	int numQueries=0;
	scanf("%d %d %d", &n, &m, &numQueries);
	while((n + m + numQueries) != 0){

		int *adj [n];
		std::vector<triplet> edgeList;
		for(int i = 0; i < n; i ++)
			adj[i] = new int[n];
		for(int i = 0; i < m; ++i){
			int a, b, w;
			scanf("%d %d %d", &a, &b, &w);
			adj[a][b] = w;
			edgeList.push_back({a, b, w});
		}

			
		int origin=0;
		int target=0;
		int pathDist=0;
		int *distance [n] ; 
		for(int i = 0; i < n; ++i)
			distance[i] = new int[n];
		floyd_warshall(n, adj, distance, origin, target);

		//Keep track of whether graph has a negative cycle
		bool negativeCycle = false;
		for (int i = 0; i < n; ++i)
			//If distance to self from a path,
			//by definition a negative cycle exists
			if(distance[i][i] < 0) 
				negativeCycle = true;

		for(int i = 0; i < numQueries; ++i){
			scanf("%d %d", &origin, &target );
			
			pathDist = distance[origin][target];

			if(negativeCycle){
				if (bellman_ford( edgeList, n, origin, target ) == -1)
					printf("-Infinity\n");

			}
			else if(pathDist == INF)
				printf("Impossible\n");
			else
				printf("%d\n", pathDist);
		}	
		printf("\n");
		scanf("%d %d %d", &n, &m, &numQueries);
	}
	return 0;

}

