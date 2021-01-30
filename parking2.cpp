#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <algorithm>
#define pi 3.14159265359

int main() {
    int t = 0, n = 0, store=0, max=0, min=0;
    std::vector<int> distances;

    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        std::cin>> n;
        for(int k=0; k<n; k++)
        {
            std::cin >> store;
            if(k==0)
                min=store;
            if(store>max)
                max=store;
            else if(store<min)
                min=store;
        }
        distances.push_back(max-min);
        min=0;
        max=0;
        store=0;
    }

    for(auto x: distances)
        std::cout << x*2 << std::endl;



    return 0;
}