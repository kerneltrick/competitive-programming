#include <iostream>
#include <cmath>
#include <string>
#include <vector>

int main(){
	
	double c;

	std::cin >> c;
	c /= 2;
	if(c > 0.5)
		c = 0.5;
	printf("%.6f\n", c*c);


	return 0;
}
