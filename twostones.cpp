#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>



int main() {
    int n;
    std::cin >> n;
    if(n%2==1)
        std::cout << "Alice";
    else
        std::cout << "Bob";
    return 0;
}