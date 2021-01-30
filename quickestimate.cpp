#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>
#define pi 3.14159265359

int main() {
    int n=0;
    std::vector<std::string> response;
    std::string temp;
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cin >> temp;
        response.push_back(temp);
    }

    for(auto s: response)
        std::cout << s.size() << std::endl;

    return 0;
}