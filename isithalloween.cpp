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
    int day=0;
    std::string month;

    std::cin >> month >> day;

    if((month=="OCT" && day==31)||(month=="DEC"&&day==25))
        std::cout << "yup" << std::endl;
    else
        std::cout << "nope" << std::endl;

    return 0;
}
