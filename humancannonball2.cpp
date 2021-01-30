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
#define gravity 9.81

int main() {
    double vnot=0, theta=-0, x=0, h1=0, h2=0, time=0, y=0, angle=0;
    std::vector<double> vnots, thetas, xs, h1s, h2s;
    int n=0;

    std::cin >> n;

    for(int i=0; i<n; i++){
        std::cin >> vnot >> theta >> x >> h1>> h2;
        vnots.push_back(vnot);
        angle=(theta*(pi/180));
        thetas.push_back(angle);
        xs.push_back(x);
        h1s.push_back(h1);
        h2s.push_back(h2);
    }
    for(int i=0; i<n; i++)
    {
        time=(xs.at(i))/(vnots.at(i)*std::cos(thetas.at(i)));
        y=(vnots.at(i)*time*std::sin(thetas.at(i)))-(0.5*gravity*time*time);
        if(y<(h1s.at(i)+1)||y>(h2s.at(i)-1))
            std::cout << "NOT SAFE" << std::endl;
        else
            std::cout << "SAFE" << std::endl;
    }
    return 0;
}
