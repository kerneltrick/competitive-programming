#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>

int rec(int n)
{
    if (n==1)
        return 3;
    return (rec(n-1)*2)-1;
}

int main() {
    int N=0, sol=0;
    std::cin >> N;
    sol= rec(N)*rec(N);
    std::cout << sol << std::endl;


    return 0;
}