#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>



int main() {
    int B=42, r=0, temp=0;
    std::set<int> numbers{};

    for (int i=0; i< 10; i++){
        std::cin >> temp;
        r=temp%B;
        numbers.insert(r);
    }

    std::cout << numbers.size();
    return 0;

}