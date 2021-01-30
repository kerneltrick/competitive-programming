#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>




int main() {
    std::string response = "", answer= "yes", temp="";
    std::vector<std::string> words{};
    std::getline(std::cin, response);
    int i=1, j=0;
    response += ' ';
    std::string test = ' '+response;

    for(i; i<test.size(); i++){
        if(test.at(i)==' ' ){
            temp=test.substr(j+1, ((i-1)-j));
            j=i;
            if(std::find(words.begin(),words.end(),temp)!=words.end())
                answer="no";
            else
                words.push_back(temp);
        }
    }

    std::cout << answer;

    return 0;
}