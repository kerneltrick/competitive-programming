#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <algorithm>
#define pi 3.14159265359

int main() {
    int n=1, k=1;
    std::string finalName;
    std::pair<std::string, std::string> coupleOfStudents;  //Holds our two students
    std::deque<std::pair<std::string, std::string>> presortedListOfPairs;  //Stores pairs of students
    std::deque<std::string> setOfNames;  //Stores post-sorted list
    std::vector<std::deque<std::string>> answers;  //stores solutions
    std::cin >> n;
    while(n>0){
        finalName = "blank";
        for(int i=0; i<n; i+=2){
            if(i==(n-1)){
                std::cin>> finalName;
                break;
            }
            std::cin >> coupleOfStudents.first;
            std::cin >>coupleOfStudents.second;
            presortedListOfPairs.push_front(coupleOfStudents);
        }
        if(finalName!="blank")
            setOfNames.push_back(finalName);
        while(!presortedListOfPairs.empty()){
            setOfNames.push_front(presortedListOfPairs.at(0).first);
            setOfNames.push_back(presortedListOfPairs.at(0).second);
            presortedListOfPairs.pop_front();
        }
        answers.push_back(setOfNames);
        setOfNames.clear();
        std::cin >> n;
    }

    for(int i=1; i<=answers.size(); i++){
        std::cout << "SET " << i << std::endl;
        for(auto x: answers.at(i-1))
            std::cout << x << std::endl;
    }
    return 0;
}