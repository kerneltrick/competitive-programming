#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>




int main() {
    int N=0;
    double b=0, p=0, min_bpm=0, abpm=0, max_bpm;
    std::vector<double> answers;
    std::cin >> N;
    std::cout << std::fixed <<std::setprecision(4);
    for(int i=0; i<N; i++){
        std::cin >> b >> p;
        abpm=(60*b)/p;
        min_bpm=(60/(p/(b-1)));
        max_bpm=(60/(p/(b+1)));
        answers.push_back(min_bpm);
        answers.push_back(abpm);
        answers.push_back(max_bpm);
    }
    for(int i=0; i<(3*N); i+=3){
        std::cout << answers.at(i+0) << " " <<  answers.at(i+1) << " " << answers.at(i+2) << std::endl;
    }
    return 0;
}