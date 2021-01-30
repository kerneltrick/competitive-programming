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

int factorial(int x){
    if(x==1)
        return 1;
    return x*factorial(x-1);
}

int firstDigit(int x){
    while(x>10){
        x/=10;
    }
    return x;
}

int lastDigit(int x){
    x=(x%10);
    return x;
}


int main() {
    std::queue<int> facts{};
    int N=0;

    std::cin >> N;
    int temp=0;

    for(int i=0; i<N; i++) {
        std::cin >> temp;
        facts.push(temp);
    }
    for(int i=0; i<N; i++){
        std::cout << lastDigit(factorial(facts.front())) << std::endl;
        facts.pop();
    }
    return 0;
}