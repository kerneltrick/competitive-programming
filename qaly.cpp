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

    double QALY=0, years=0, total=0;

    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cin >> QALY >> years;
        total+=(QALY*years);
    }

    std::cout << std::setprecision(3) << std::fixed << total << std::endl;

    return 0;
}
