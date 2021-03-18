#include <stdio.h>
#include <iostream>
#include <math.h>
#define EPSILON 0.0000001

using namespace std;


double quadratic_equation(double a, double b, double c){

	double numerator = (-1*b) + sqrt( (b*b) - (4*a*c) );
	double denominator = (2*a);
	double root = numerator/denominator;

	return root;
}

int main(){
	
	double leak=0, k=0, t1=0, t2=0, h=0, f1=0, f2=0;
	cin >> leak >> k >> t1 >> t2 >> h;

	if(h<leak){
		f1=h;
		f2 = h;
	}else{

		double max = h + (t2*k);
		double r = quadratic_equation(t1, (-1*(max + (k*t1))), (k*leak)) ;
		f1 = leak;
		f2 = t1 * r;
		if((h-leak) > EPSILON)
			f1 = f2;
	}

	printf("%.6f %.6f\n", f1, f2);

}
