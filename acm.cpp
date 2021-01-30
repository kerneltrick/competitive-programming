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

struct question{
    std::string result;
    char letter;
    int time=0;
};

int timePenalty(char q, std::vector<question> vec){
    int k=0;
    for(auto x: vec)
    {
        if(x.letter==q)
            k+=20;
    }
    return k;
}

int main() {
    int k=0;
    char questionID;
    std::string isCorrect;

    std::vector<question> correctAnswers, wrongAnswers;
    question placeHolder;

    do{
        std::cin >> k;
        if(k==(-1))
            break;
        std::cin >> questionID >> isCorrect;
        if(isCorrect=="right")
        {
            placeHolder.time=k;
            placeHolder.letter=questionID;
            placeHolder.result=isCorrect;
            correctAnswers.push_back(placeHolder);
        }else{
            placeHolder.time=k;
            placeHolder.letter=questionID;
            placeHolder.result=isCorrect;
            wrongAnswers.push_back(placeHolder);
        }
    }while(k!=(-1));

    int totalPenalty=0, timeToSolve=0, totalTime=0;

    for(auto x: correctAnswers){
        totalPenalty+=timePenalty(x.letter, wrongAnswers);
        timeToSolve+=x.time;
    }

    totalTime=timeToSolve+totalPenalty;

    std::cout << correctAnswers.size() << " " << totalTime;


    return 0;
}