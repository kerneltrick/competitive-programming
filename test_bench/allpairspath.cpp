#include <stdio.h>
#include <math.h>
#include <climits>
#include <tuple>
#include <utility>
#include <vector>
#define INF 100000000 


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
		for(int i = 0; i < n; i ++)
			adj[i] = new int[n];
		for(int i = 0; i < m; ++i){
			int a, b, w;
			scanf("%d %d %d", &a, &b, &w);
			adj[a][b] = w;
		}

			
		int origin=0;
		int target=0;
		int pathDist=0;
		int *distance [n] ; 
		for(int i = 0; i < n; ++i)
			distance[i] = new int[n];
		floyd_warshall(n, adj, distance, origin, target);

		for(int i = 0; i < n; ++i){
			for(int j=0; j < n; ++j){
				for(int k=0; distance[i][j] != -INF && k<n; ++k){
					if(distance[k][k] < 0 && distance[i][k] != INF && distance[k][j] != INF)
						distance[i][j] = -INF;
				}
			}
		}

		for(int i = 0; i < numQueries; ++i){
			scanf("%d %d", &origin, &target );
			
			pathDist = distance[origin][target];

			if(pathDist == -INF )
				printf("-Infinity\n");
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

