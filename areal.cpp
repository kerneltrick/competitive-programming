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

int main() {
    double area=0, side=0, perimeter=0;

    std::cin >> area;

    side=sqrt(area);

    perimeter=4*side;

    std::cout << std::setprecision(6) << std::fixed;
    std::cout << perimeter << std::endl;





    return 0;
}