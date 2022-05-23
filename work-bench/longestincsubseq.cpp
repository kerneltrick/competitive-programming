#include <stdio.h>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
	int n = 0;

	while(cin >> n){
		vector<int> seq;
		int temp=0;
		for(int i=0; i<n; ++i){
			cin >> temp;
			seq.push_back(temp);
		}
		
		int length[n] = {0};
		vector<int> solutions[n];
		int maxLen = 0;
		vector<int> maxSol;
		for(int i=0; i<n; i++){
			length[i] = 1;
			solutions[i].push_back(i);
			for(int j=0; j<i; j++){
				if(seq[j] < seq[i])
					if (length[i] < length[j] + 1){
						length[i] = length[j]+1;
						solutions[i] = solutions[j];
						solutions[i].push_back(i);
					}
				if(length[i] > maxLen){
					maxLen = length[i];
					maxSol = solutions[i];
				}
			}
		}

		cout << maxSol.size() << endl;
		for(auto x: maxSol){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
