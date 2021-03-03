#include <iostream>

using namespace std;
int main(){

	int n = 0;

	scanf("%d", &n);
	
	long long maxVal = 0;
	long long sum = 0;
	long long colorCount = 0;
	for(int  i = 0; i < n; ++i){

		scanf("%d", &colorCount);
		maxVal = max(maxVal, colorCount);
		sum += colorCount;
	}

	if(sum <= maxVal*2)
		printf("%lld\n", min(sum - maxVal, maxVal));
	else
		printf("%lld\n", sum/2);

	return 0;
}
