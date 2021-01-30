#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>



int main() {
    int n=0, h=0, v=0, a=0, b=0, c=0;


    std::cin >> n >>  h >> v;

    if(h>(n/2))
        a=(h);
    else
        a=(n-h);
    if(v>(n/2))
        b=v;
    else
        b=(n-v);

    c=(a*b*4);

    std::cout << c;

    return 0;
}