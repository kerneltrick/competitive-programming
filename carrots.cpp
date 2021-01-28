#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    int n=0, carrots=0;
    std::vector<std::string> contestants{};
    std::string temp ="";
    std::cin >> n >> carrots;
    for (int i=0; i<n; i++)
    {
        std::cin >> temp;
        contestants.push_back(temp);
    }
    std::cout << carrots;

    return 0;
}
