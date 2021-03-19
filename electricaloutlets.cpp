#include <iostream>

int main(){
	int N = 0;
	std::cin >> N;

	for(int i = 0; i < N; ++i){

		int k=0;
		std::cin >> k;
		int sum = 0;
		int o = 0;
		for(int j = 0; j < k; ++j){
			std::cin >> o;
			sum += o;
		}
		printf("%d\n", (sum-k+1) );
	
	}
	return 0;
}
