#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    int H=0, W=0, N=0,temp=0;
    double D=0;
    std::vector<int> key{};
    std::cin >>N >>W >>H;

    D = std::sqrt((H*H)+(W*W));

    for (int i=0; i<N; i++)
    {
        std::cin>> temp;
        key.push_back(temp);
    }

    for(auto a: key)
    {
        if(a<=D)
            std::cout <<"DA" <<std::endl;
        else
            std::cout <<"NE" <<std::endl;
    }
    return 0;
}
