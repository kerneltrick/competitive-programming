#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string A="", B="", new_A="", new_B="";
    int a, b;
    std::cin >> A >> B;
    for(int i=0; i<3; i++){
        new_A.push_back(A.at(2-i));
        new_B.push_back(B.at(2-i));
    }
    a=std::stoi(new_A);
    b=std::stoi(new_B);
    if(a>b){
        std::cout << a;
    } else{
        std::cout << b;
    }

    return 0;
}