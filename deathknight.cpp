#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <algorithm>
#define pi 3.14159265359

int main() {
    int n=0, k=0;
    char previous=' ';
    std::string input;
    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cin >> input;
        for(auto x: input){
            if(x=='D'  && previous=='C'){
                k++;
                break;
            }
            previous=x;
        }
        previous=' ';
    }

    std::cout << (n-k) << std::endl;


    return 0;
}