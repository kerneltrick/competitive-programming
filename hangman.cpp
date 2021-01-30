#include <iostream>
#include <sstream>
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

int locate(std::string word, char let){
    int k=0;
    for(auto w: word){
        if(w==let)
            k++;
    }
    return k;
}

int main() {
    std::string key, letters;

    std::cin >> key;
    std::cin >> letters;

    int correct=0, incorrect=0;

    for(auto letter: letters)
    {
        if(key.find(letter)!=std::string::npos)
            correct+=locate(key, letter);
        else
            incorrect++;
        if(incorrect==10){
            std::cout << "LOSE" << std::endl;
            break;
        }else if(correct==key.size()){
            std::cout << "WIN" << std::endl;
            break;
        }
    }



    return 0;
}
