#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cmath>
#include <map>
#include <tuple>
#include <utility>
#include <set>
#include <algorithm>
#define pi 3.14159265359
#define gravity 9.81

int main() {
    int n=0;
    std::vector<int> solution;

    while(n!=-1){
        int totalTime=0, tripTime=0, lastTime=0, mph=0, miles=0;
        std::cin>>n;
        if(n==-1)
            break;
        for(int i=0; i<n; i++)
        {
            std::cin >> mph >> totalTime;
            tripTime=totalTime-lastTime;
            lastTime=totalTime;
            miles+=mph*tripTime;
        }
        solution.push_back(miles);
    }

    for(auto m: solution)
        std::cout << m << " miles" << std::endl;
    return 0;
}
