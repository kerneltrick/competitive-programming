#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>


using namespace std;

int main(){

	//N represents number of records in database
	//Q reoresents number of queries
	int N;
	int Q;
	cin >> N >> Q;
	cin.ignore();

	//database
	int records[N] = {0};

	string line;
	for(int i = 0; i < Q; ++i){

		//This block gets line and stores in query vector
		getline(cin, line);
		stringstream ss(line);
		vector<string> query;
		string item;
		while(ss >> item)
			query.push_back(item);

		//First word in query is event type
		string command  = query.at(0);
		if (query.size() == 2){
			if(command == "PRINT") //Print item
				cout << records[stoi(query.at(1)) - 1] << endl;
			else{ //Reset all records
				for(int j = 0; j < N; ++j)
					records[j] = stoi(query.at(1));
			}
		}else{ //Set specific item in database
			records[stoi(query.at(1)) - 1] = stoi(query.at(2));
		}
	}
	return 0;
}
