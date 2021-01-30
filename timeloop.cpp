#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>



int main() {
    int n=0;
    std::string spell = "Abracadabra";
    std::cin >> n;

    for(int i=1; i<=n; i++){
        std::cout << i << " " << spell << std::endl;
    }
    return 0;
}