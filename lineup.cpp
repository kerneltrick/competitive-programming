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
    int n=0;
    std::string name;
    std::vector<std::string> team, decreasing, increasing;

    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cin >> name;
        team.push_back(name);
    }

    decreasing=team;
    increasing=team;
    sort(decreasing.begin(), decreasing.end(), std::less<std::string>());
    sort(increasing.begin(), increasing.end(), std::greater<std::string>());


    if(team==decreasing)
        std::cout << "INCREASING" << std::endl;
    else if(team==increasing)
        std::cout << "DECREASING" << std::endl;
    else
        std::cout << "NEITHER" << std::endl;

    return 0;
}