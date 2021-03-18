#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	
	double l=0, k=0, t1=0, t2=0, h=0, f1=0, f2=0;
	cin >> l >> k >> t1 >> t2 >> h;

	if(h<l){
		f1=h;
		f2 = h;
	}else{
		f1 = h;
		double max = h + (t2*k);
		double r = (max/t1) + ((1-(l/max))*k);
		f2 = t1 * r;
	}

	printf("%.6f %.6f\n", f1, f2);

}
