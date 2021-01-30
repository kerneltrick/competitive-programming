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
    int n=0, p=0;
    std::vector<int> newLine;
    std::cin >> n;
    for(int i=1; i<n; i++){
        std::cin >> p;
        newLine.push_back(p);
    }

    int oldLine[n];
    oldLine[0]=1;
    for(int i=0; i<newLine.size(); i++)
        oldLine[newLine.at(i)+1] = (i+2);

    for(int i=0; i<n; i++)
        std::cout << oldLine[i] << " ";

    return 0;
}
