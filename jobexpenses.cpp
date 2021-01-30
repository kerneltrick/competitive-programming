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
    int n=0, k=0, answer=0;
    std::vector<int> ledger;
    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cin >> k;
        ledger.push_back(k);
    }
    for(auto x: ledger){
        if(x<0)
            answer+=x;
    }


    std::cout << abs(answer) <<std::endl;

    return 0;
}