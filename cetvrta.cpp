#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <algorithm>
#define pi 3.14159265359

std::pair<int,int> solve (std::vector<std::pair<int,int>> coordinate){
    int a=0, b=0;
    std::pair<int,int> answer;

    if(coordinate.at(0).first==coordinate.at(1).first)
        a=coordinate.at(2).first;
    else if(coordinate.at(0).first==coordinate.at(2).first)
        a=coordinate.at(1).first;
    else if(coordinate.at(1).first==coordinate.at(2).first)
        a=coordinate.at(0).first;
    if(coordinate.at(0).second==coordinate.at(1).second)
        b=coordinate.at(2).second;
    else if(coordinate.at(0).second==coordinate.at(2).second)
        b=coordinate.at(1).second;
    else if(coordinate.at(1).second==coordinate.at(2).second)
        b=coordinate.at(0).second;

    answer = std::make_pair(a,b);

    return answer;


}


int main() {
    std::vector<std::pair<int,int>> coordinates;
    std::pair<int,int> place, answer;
    std::cin.clear();
    int a=0, b=0;
    for(int i=0; i<3; i++){
        std::cin >> a >> b;
        place=std::make_pair(a,b);
        coordinates.push_back(place);
        a=0;
        b=0;
    }
    answer=solve(coordinates);
    std::cout << answer.first << " " << answer.second << std::endl;

    return 0;
}