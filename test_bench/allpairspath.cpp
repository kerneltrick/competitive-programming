#include <stdio.h>
#include <math.h>
#include <climits>
#include <tuple>
#include <vector>
#define INF 100000000 
typedef std::tuple<int, int, int> triplet;

int bellman_ford(std::vector<triplet> edgeList, int distance[], int n, int origin, int target){
	distance[origin] = 0;

	for(int i = 0; i < n-1; ++i){
		for (auto e: edgeList){
			int a, b, w;
			std::tie(a, b, w) = e;
			distance[b] = std::min(distance[b], distance[a] + w);	
		}	
	}
	
	for (auto e: edgeList){
		int a, b, w;
		std::tie(a,b,w) = e;
		if(distance[b] > (distance[a] + w ))
			return -1;
	}

	return distance[target];
}

int main(){
	int n=0;
	int m=0;
       	int numQueries=0;
	scanf("%d %d %d", &n, &m, &numQueries);
	while((n + m + numQueries) != 0){

		std::vector<triplet> edgeList;
		for(int i = 0; i < m; ++i){
			triplet edge;
			int a, b, w;
			scanf("%d %d %d", &a, &b, &w);
			edgeList.push_back({a,b,w});
		}

			
		int origin=0;
		int target=0;
		int dist=0;
		int distance[n]; 
		for (int i = 0; i < n; ++i)
			distance[i] = INF;

		for(int i = 0; i < numQueries; ++i){
			scanf("%d %d", &origin, &target );
			dist = bellman_ford(edgeList, distance, n, origin, target);
			if(dist == INF)
				printf("Impossible\n");
			else if(dist == -1)
				printf("-Infinity\n");
			else
				printf("%d\n", dist);
			
		}	
		printf("\n");
		scanf("%d %d %d", &n, &m, &numQueries);
	}
	return 0;


}

