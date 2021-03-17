#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	
	double l=0, k=0, t1=0, t2=0, h=0, f1=0, f2=0;
	cin >> l >> k >> t1 >> t2 >> h;
	f1=h;
	if(h<l){
		f2 = h;
	}else{
		double max = h + (t2*k);
		double r = (max / (2*t1)) + (k/2);
		f2 = r * t1;
	}

	printf("%.6f %.6f", f1, f2);

}
