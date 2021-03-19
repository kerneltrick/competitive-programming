#include <iostream>
using namespace std;

int main(){
	int n = 0;
	bool valid = true;
	
	cin >> n;
	int cols [n]{0}, rows [n] {0}, diag1[(2*n)-1]{0}, diag2[(2*n)-1]{0};

	for(int i = 0; i < n; ++i){

		int x=0, y=0;
		cin >> x >> y;
		if(cols[x] > 0)
			valid = false;
		cols[x]++;
		if(rows[y] > 0)
			valid = false;
		rows[y]++;
		if(diag1[x+y] > 0)
			valid = false;
		diag1[x+y]++;
		if(diag2[x-y+(n-1)] > 0)
			valid = false;
		diag2[x-y+(n-1)]++;
	}
	if(valid)
		printf("CORRECT\n");
	else
		printf("INCORRECT\n");

	return 0;
}
