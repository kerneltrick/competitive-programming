#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

int main(){

	//N represents number of records in database
	//Q reoresents number of queries
	int N;
	int Q;
	cin >> N >> Q;
	cin.ignore();

	//database
	map<int, int> records;
	int reset = 0;

	string line;
	for(int i = 0; i < Q; ++i){

		//This block gets line and stores in query vector
		getline(cin, line);
		stringstream ss(line);
		string query [3] = {""};
		string item;
		int q = 0;
		while(ss >> item){
			query[q] = item;
			q++;
		}

		//First word in query is event type
		
		int arg1 = stoi(query[1]);
		if (query[2].empty()){
			if(query[0] == "PRINT"){ //Print item
				if( records.find(arg1) == records.end() )
					cout << reset << '\n';
				else
					cout << records.at(arg1) << '\n';
			}else{ //Reset all records
				reset = arg1;
				records.clear();
			}
		}else{ //Set specific item in database
			if( records.find(arg1) == records.end() )
				records.insert(pair<int, int>(arg1, stoi(query[2])));
			else
				records.at(arg1) = stoi(query[2]);
		}
	}
	return 0;
}
