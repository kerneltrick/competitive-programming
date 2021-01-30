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
    int allotted=0, n=0, remainder=0, p=0;

    std::cin >> allotted >> n;
    std::vector<int> month;

    for(int i=0; i<n; i++){
        std::cin >> p;
        month.push_back(p);
    }

    for(auto m: month){
        remainder+=(allotted-m);
    }

    remainder+=allotted;

    std::cout << remainder;


    return 0;
}
