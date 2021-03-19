#include<iostream>

using namespace std;

int main(){
	
	int k=0;
	int n=0;

	cin >> n >> k;

	double overall_sofar = 0;

	for(int i = 0; i < k; i++){
		double r = 0;
		cin >> r;	
		overall_sofar += r;
	}

	double num_left = n-k;

	double min_overall = (overall_sofar + (num_left * -3.0))/n;
	double max_overall = (overall_sofar + (num_left * 3.0))/n;

	printf("%f %f\n", min_overall, max_overall);

	return 0;
}
