#include <stdio.h>
#include <math.h>
#include <climits>
#define INF INT_MAX

int bellman_ford(){

	return 0;
}

int main(){
	int n=0;
	int m=0;
       	int numQueries=0;
	scanf("%d %d %d", &n, &m, &numQueries);
	while((n + m + numQueries) != 0){

		std::vector<int> edgeList;
		scanf("%d %d %d", &n, &m, &numQueries);
		for(int i = 0; i < m; ++i){
			std::tuple<int, int, int> edge;
			int a, b, w;
			scanf("%d %d %d", &a, &b, &c);
			edgeList.push({a,b,w});
		}
		int a=0;
		int b=0;
		for(int i = 0; i < numQueries; ++i){
			scanf("%d %d", &a, &b );
		}	
	}


}

