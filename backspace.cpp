#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::string ins = "", solution="";
    std::cin>>ins;
    for (int i=0; i< ins.size(); i++){
        if(ins.at(i)=='<'){
            solution.pop_back();
        }else{
            solution+=ins.at(i);
        }

    }
    std::cout << solution;
    return 0;
}
