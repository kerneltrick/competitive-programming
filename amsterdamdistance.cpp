#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int main(){

	int slices = 0;
	int rings = 0;
	double radius = 0.0;
	int ax = 0;
	int ay = 0;
	int bx = 0;
	int by = 0;

	//input
	scanf("%d %d %lf", &slices, &rings, &radius);
	scanf("%d %d %d %d", &ax, &ay, &bx, &by);
	
	double ringwidth = 0;	
	double radialDist = 0;
	double straightDist = 0;
	double totalRingDist = 0;

	ringwidth = radius/double(rings);
	straightDist = abs(by - ay) * ringwidth;
	//s = 2 * pi * r * theta/360
	radialDist = 2 * M_PI * (std::min(ay, by)*ringwidth) * (double(abs(ax-bx))/(2*slices)) ;
	totalRingDist = straightDist + radialDist;

	double distThruCenter = 0;
	distThruCenter = (ay + by) * ringwidth ;

	double bestDist = 0;
	bestDist = std::min(distThruCenter, totalRingDist);

	//output
	printf("%.12lf\n", bestDist);

	return 0;
}
