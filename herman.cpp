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
    int x1=0, x2=0, y1=0, y2=0, R=0;

    double euclid=0, taxi=0, taxiSide=0;

    std::cin >> R;

    std::cout << std::setprecision(6) << std::fixed ;

    euclid=pi*(R*R);
    taxiSide=sqrt((R*R)+(R*R));
    taxi=(taxiSide*taxiSide);

    std::cout << euclid << std::endl << taxi << std::endl;

    return 0;
}