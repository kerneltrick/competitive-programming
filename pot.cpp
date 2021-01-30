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
    int n=0, answer=0, base=0, pow=0;

    std::cin >> n;

    std::string num;

    for(int i=0; i<n; i++)
    {
        std::cin >> num;
        pow=num.back()-'0';
        num.pop_back();
        base=std::stoi(num);
        answer+=std::pow(base,pow);
        num.clear();
    }

    std::cout << answer << std::endl;

    return 0;
}
