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

int sum(int n){
    return((n*(n+1))/2);
}

int main() {
    int n=0, k=0, d=0;
    std::cin >> n;
    std::vector<int> days;
    while(k<n){
        std::cin >> k >> d;
        days.push_back(d);
    }
    k=1;
    for(int i =0; i<n; i++){
        std::cout << k << " " << sum(days.at(i))+days.at(i) << std::endl;
        k++;
    }
    return 0;
}