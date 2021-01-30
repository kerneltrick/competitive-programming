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
    int limit=0, toldToLeave=0, x=0, total=0, temp=0;
    std::string direction;

    std::cin >> limit >> x;

    for(int i=0; i<x; i++){
        std::cin >> direction >> temp;
        if(direction=="enter")
            total+=temp;
        else
            total-=temp;

        if(total>limit)
        {
            toldToLeave++;
            total-=temp;
        }
        direction.clear();
        temp=0;
    }

    std::cout << toldToLeave << std::endl;

    return 0;
}
