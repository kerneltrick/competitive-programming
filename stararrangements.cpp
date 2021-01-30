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

bool solve(int a, int b, int s)
{
    int answer=0;
    while(answer<s)
    {
        answer+=a;
        if(answer==s)
            return true;
        answer+=b;
        if(answer==s)
            return true;
    }
    return false;
}


int main() {
    int s=0;
    std::cin >> s;
    std::cout << s << ":" << std::endl;
    for (int i=1; i<=(s/2); i++){
        if(solve(i+1, i, s))
            std::cout << i+1 << "," << i << std::endl;
        if(solve(i+1, i+1, s))
            std::cout << i+1 << "," << i+1 << std::endl;
    }



    return 0;
}