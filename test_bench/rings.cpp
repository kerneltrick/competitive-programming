#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;


int overlap(double x1, double y1, double r1, double x2, double y2, double r2){
	double yDist = pow((y2-y1),2);
	double xDist = pow((x2-x1),2);
	if(sqrt(yDist + xDist) < (r1+r2))
		return 1;
	return 0;
}

int largest_component(vector<vector<int>> graph, int i, int j){
	if (graph.at(i).at(j) == 0)
		return 0;
	return (1 + largest_component(graph, i+1, j) + largest_component(graph, i, j+1) );

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


		//initialize matrix of zeros representing simple undirected graph
		vector<vector<int>> vertices( n, vector<int>(n, 0));
		//overlapping graphs are connected
		for(int i = 0; i < n; ++i)
			for(int j = (i+1); j<n; ++j)
				vertices.at(i).at(j) = overlap(rings[i][0], rings[i][1], rings[i][2], rings[j][0], rings[j][1], rings[j][2]);
		
		for(auto vec: vertices)
			for(auto x: vec)
				cout << x << '\n';
		//find largest connected component
		int largestComponent = 0;
		int candidate = 0;
		for(int i = 0; i < (n-1); ++i){
			for(int j = (j+1); j < (n-1); ++j ){
				candidate = largest_component(vertices, i, j);
				if ( candidate > largestComponent)	
					largestComponent = candidate;
			}
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
