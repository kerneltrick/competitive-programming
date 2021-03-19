#include <iostream>
#include <math.h>

int main(){

	long double a=0, b=0, c=0, answer;
	std::cin >> a >> b >> c;
	answer = a * (b/c);

	printf("%.10Lf\n", answer);
	return 0;
	

}
