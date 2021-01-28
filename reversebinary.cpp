#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    std::vector<int> binary_rep {};
    int first=0, sol=0, digit=0;

    std::cin>> first;

    while(first!=0){
        digit=first%2;
        binary_rep.push_back(digit);
        first=(first/2);
    }
    int k=binary_rep.size();
    for(int i=0; i<k; i++){
        sol+=(binary_rep.back()*(pow(2,i)));
        binary_rep.pop_back();
    }

    std::cout << std::endl << sol;

    return 0;
}
