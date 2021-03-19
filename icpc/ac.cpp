#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(){
	
	string cards;
	cin >> cards;
	set<char> unique;
	
	for(auto c: cards){
		if(unique.find(c) == unique.end()){
			unique.insert(c);
		}else{
			printf("0\n");
			return 0;
		}
	}
	printf("1\n");

	return 0;
}
