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

int main() {
    int n=0, c=0, k=0;

    std::cin >> n;

    for(int i=0; i<n; i++)
    {
        std::cin >> c;
        if(c<0)
            k++;
    }

        std::cout << k << std::endl;


    return 0;
}