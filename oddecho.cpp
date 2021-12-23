#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	string line;
	int N = 0;
	cin >> N;

	for(int i = 0; i<N; ++i){

		cin >> line;
		if(i % 2 == 0)
			cout << line << endl;
	}

	return 0;
}
