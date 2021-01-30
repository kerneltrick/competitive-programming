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
    int n=0, k=0;

    std::cin >> n;
    std::vector<int> numbers;


    for(int i=0; i<n; i++){
        std::cin >> k;
        numbers.push_back(k);
    }

    for(auto x: numbers){
        if(x%2==0)
            std::cout << x << " is even" << std::endl;
        else
            std::cout << x << " is odd" << std::endl;
    }

    return 0;
}
