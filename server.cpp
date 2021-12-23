#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	int n, T;

	cin >> n >> T;

	int totalTime = 0;
	int tasksCompleted = 0;
	int task = 0;
	
	for(int i=0; i < n; ++i){

		cin >> task;
		totalTime += task;
		if(totalTime <= T)
			tasksCompleted++;

	}

	cout << tasksCompleted << endl;

	return 0;
}
