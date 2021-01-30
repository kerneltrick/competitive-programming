#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>

#define PI 3.14159265359


int main() {
    int  l=0;
    double v=0, h=0;
    std::cin >> h >>v;
    v=((v*PI)/180);
    l=ceil((h/sin(v)));
    std::cout << l;
    return 0;
}