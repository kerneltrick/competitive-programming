#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    int L=0, D=0, X=0, ones=0, tens=0, hundreds=0, thousands=0, tenthousands=0, maximal=0, minimal=0;
    std::vector<int> possibleSolutions;
    std::cin >> L >> D >> X;

    for (int i=L; i<=D; i++){
        ones=i%10;
        tens=((i%100)-(ones))/10;
        hundreds=((i%1000)-(tens+ones))/100;
        thousands=((i%10000)-(hundreds+tens+ones))/1000;
        tenthousands=(i%100000)/10000;
        if((ones+tens+hundreds+thousands+tenthousands)==X)
            possibleSolutions.push_back(i);
    }
    maximal=possibleSolutions.at(0);
    minimal=possibleSolutions.at(0);
    for(auto x:possibleSolutions){
        if(x>maximal)
            maximal=x;
        if(x<minimal)
            minimal=x;
    }

    std::cout << minimal <<std::endl;
    std::cout << maximal <<std::endl;

    return 0;
}