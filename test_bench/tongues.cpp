#include <iostream>
#include <string>

using namespace std;

int main(){

	string vowels = "aiyeou";
	string consonants = "bkxznhdcwgpvjqtsrlmf";
	string line, answer;

	getline(cin, line);

	for(int i = 0; i < line.size(); ++i){
		char letter = line.at(i);
		char add;

		bool upper = isupper(letter);
		letter = tolower(letter);
		if(vowels.find(letter) != string::npos)
			add = vowels.at((vowels.find(letter) + vowels.size() - 3)%vowels.size());
		else if(consonants.find(letter) != string::npos)
			add = consonants.at((consonants.find(letter) + consonants.size() -10) % consonants.size());
		else{
			answer.push_back(letter);
			continue;

		}
		if(upper)
			add = toupper(add);

		answer.push_back(add);

	}
	cout << answer << endl;
	

	return 0;
}
