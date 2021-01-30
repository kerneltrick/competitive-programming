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
    int e=0, f=0, c=0, bottles=0, answer=0;

    std::cin >> e >> f >> c;
    bottles=e+f;

    while(bottles>0){
        bottles-=c;
        if(bottles<0)
            break;
        answer++;
        bottles++;
    }

    std::cout << answer;

    return 0;
}
