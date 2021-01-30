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

int main() {
    int n=0, r=0,e=0,c=0;

    std::cin >> n;
    std::vector<std::vector<int>> revenues(n);


    for(int i=0; i<n; i++){
        std::cin >> r >> e >> c;
        revenues.at(i).push_back(r);
        revenues.at(i).push_back(e);
        revenues.at(i).push_back(c);
    }

    for(auto vec: revenues){
        if(vec.at(0)>(vec.at(1)-vec.at(2)))
            std::cout << "do not advertise" << std::endl;
        else if(vec.at(0)<(vec.at(1)-vec.at(2)))
            std::cout << "advertise" << std::endl;
        else
            std::cout << "does not matter" << std::endl;


    }
    return 0;
}
