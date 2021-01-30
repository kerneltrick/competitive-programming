#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <algorithm>
#define pi 3.14159265359

int main() {
    int N=0, M=0;
    std::cin >> N >> M;

    if(M>N && (M-N)>1)
        std::cout << "Dr. Chaz will have " << (M-N) << " pieces of chicken left over!";
    else if(M>N)
        std::cout << "Dr. Chaz will have " << (M-N) << " piece of chicken left over!";
    else if(M<N && (N-M)==1)
        std::cout << "Dr. Chaz needs " << (N-M) << " more piece of chicken!";
    else
        std::cout << "Dr. Chaz needs " << (N-M) << " more pieces of chicken!";


    return 0;
}