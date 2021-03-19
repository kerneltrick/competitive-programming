#include <iostream>

using namespace std;

int sum_excluding(int *arr, int exclude, int n){

	int sum = 0;
	for(int i = 0; i < n; ++i){
		if (i != exclude)
			sum += arr[i];
	}
	return sum;
}

int main(){

	int n = 0;
	cin >> n;
	int orig [n];

	for(int i = 0; i < n; ++i){
		cin >> orig[i];
	}	

	for(int i = 0; i < n; ++i){
		
		if (sum_excluding(orig, i, n) == orig[i])
		{
			printf("%d\n", orig[i]);
			return 0;
		}
	}

	printf("BAD\n");

	return 0;
}
