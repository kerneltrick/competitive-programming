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
#define gravity 9.81

bool isNumber(std::string check)
{
    for(int i=0; i<check.length(); i++)
        if(!isdigit(check.at(i)))
            return false;
    return true;

}

int main() {

    int n=0, radi=0;
    std::string color, input1, input2;

    std::vector<std::pair<int, std::string>> cups;

    std::cin >> n;

    for(int i=0; i<n; i++)
    {
        std::cin >> input1 >> input2;
        if(isNumber(input1))
        {
            radi=std::stoi(input1);
            radi/=2;
            color=input2;
        }else{
            radi=stoi(input2);
            color=input1;
        }

        cups.push_back(std::make_pair(radi,color));

    }

    std::sort(cups.begin(), cups.end());

    for(auto x: cups)
        std::cout << x.second << std::endl;
    return 0;
}
