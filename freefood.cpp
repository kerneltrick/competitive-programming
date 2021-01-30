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
    std::pair<int, int> times={0,0};
    std::vector<std::pair<int, int>> events;
    std::set<int> days;

    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cin >> times.first >> times.second;
        for(int k=times.first; k<=times.second; k++ )
            days.insert(k);
    }

    std::cout << days.size() << std::endl;

    return 0;
}