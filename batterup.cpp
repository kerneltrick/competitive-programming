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
    int n=0;

    std::cin >> n;

    int appearances=n;
    double atBat=0, bases=0, slugging=0;
    for(int i=0; i<n; i++)
    {
        std::cin >> atBat;

        if(atBat!=(-1))
            bases+=atBat;
        if(atBat==(-1))
            appearances--;

    }
    slugging=(bases/appearances);

    std::cout << std::setprecision(5) << std::fixed << slugging << std::endl;




    return 0;
}
