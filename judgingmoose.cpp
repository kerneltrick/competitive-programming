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
    int l=0, r=0, sum=0, max=0;

    std::cin >> l >> r;
    sum=l+r;
    max=std::max(l,r);

    if((sum)==0)
        std::cout << "Not a moose" << std::endl;
    else if(l==r)
        std::cout << "Even " << sum << std::endl;
    else
        std::cout << "Odd " << (max*2) << std::endl;


    return 0;
}
