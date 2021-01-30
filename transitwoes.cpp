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

int main() {
    int leaveHouse=0, firstClass=0, totalTimeAvailable=0, n=0, x=0;
    std::vector<int> walkingTime, rideTime, busSchedule;

    std::cin >> leaveHouse >> firstClass >> n;

    totalTimeAvailable=(firstClass-leaveHouse);

    for(int i=0; i<=n; i++){
        std::cin >> x;
        walkingTime.push_back(x);
    }
    for(int i=0; i<n; i++){
        std::cin >> x;
        rideTime.push_back(x);
    }
    for(int i=0; i<n; i++){
        std::cin >> x;
        busSchedule.push_back(x);
    }

    int trip=0;
    trip=walkingTime.at(0);

    for(int i=0; i<n; i++){
        if(trip%busSchedule.at(i)!=0)
            trip+=(busSchedule.at(i)-(trip%busSchedule.at(i)));
        trip+=rideTime.at(i);
        trip+=walkingTime.at(i+1);
    }

    if(trip<=totalTimeAvailable)
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;



    return 0;
}
