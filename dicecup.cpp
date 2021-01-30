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
    int n=0, m=0, from=0, to=0;

    std::cin >> n >> m;

    from=std::min(n,m)+1;
    to=std::max(n,m)+1;

    for(int i=from; i<=to; i++)
        std::cout << i << std::endl;

    return 0;
}
