#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>




int main() {
    int L=0;
    double C =0, w=0, h=0, cost=0;
    std::cin >> C >> L;
    for (int i=0; i<L; i++ ){
        std::cin >> w >> h;
        cost+=(C*(h*w));
    }

    std::cout << std::fixed <<std::setprecision(7) << cost << std::endl;
    return 0;


}