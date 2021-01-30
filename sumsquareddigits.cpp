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

int size(int number){
    int k=0;
    while (number>10){
        number/=10;
        k++;
    }
    k++;
    return k;
}

std::vector<int> expansion(int decimal, int base){
    std::vector<int> digits;
    while (decimal>0){
        digits.push_back(decimal%base);
        decimal=floor(decimal/base);
    }
    return digits;
}

int SSD(int base, int number){
    std::vector<int> a_i{};
    int sol=0;
    a_i=expansion(number, base);
    for(auto x: a_i)
        sol+=pow(x,2);
    return sol;
}

int main() {
    int K=0, a=0, b=0, c=0;
    std::vector<int> bases, before, after;
    std::cin >> K;

    for(int i=0; i<K; i++){
        std:: cin >> a >> b >> c;
        bases.push_back(b);
        before.push_back(c);
        after.push_back(SSD(bases.at(i), before.at(i)));
    }

    for(int k=1; k<=K; k++){
        std::cout << k << " " << after.at(k-1) << std:: endl;
    }

    return 0;
}