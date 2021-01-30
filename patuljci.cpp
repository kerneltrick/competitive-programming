#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cmath>
#include <map>
#include <tuple>
#include <utility>
#include <set>
#include <algorithm>
#define pi 3.14159265359

int summation(std::vector<int> dwarves, int i, int j){
    int answer=0;
    for(int k=0; k<9; k++){
        if(k!=i && k!=j)
            answer+=dwarves.at(k);
    }
    return answer;
}

void print(std::vector<int> dwarves, int i, int j){
    for(int k=0; k<9; k++){
        if(k!=i && k!=j)
            std::cout<<dwarves.at(k)<<std::endl;
    }
}

void calculate(std::vector<int> dwarves){
    int sum=0;
    for(int i=0; i<9; i++){
        sum=0;
        for(int j=0; j<9; j++){
            if(i!=j)
                sum=summation(dwarves, i, j);
            if(sum==100)
            {
                print(dwarves, i, j);
                return;
            }
        }
    }

}

int main() {
    int hat=0, n=0;
    std::vector<int> dwarves;

    for(int i=0; i<9; i++){
        std::cin >> hat;
        dwarves.push_back(hat);
    }
    calculate(dwarves);

    return 0;
}