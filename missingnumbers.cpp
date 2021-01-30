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
    std::vector<int> recitation, key, answer;


    for(int i=0; i<n; i++){
        std::cin >> k;
        recitation.push_back(k);
    }

    for(int i=1; i<recitation.at(n-1); i++)
    {
        key.push_back(i);
    }

    for(auto x: key)
    {
        if (find(recitation.begin(), recitation.end(), x)==recitation.end())
            answer.push_back(x);
    }

    if(!answer.empty()){
        for(auto x: answer)
            std::cout << x << std::endl;
    }else{
        std::cout << "good job" << std::endl;
    }


    return 0;
}
