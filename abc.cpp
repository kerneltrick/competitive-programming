#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <algorithm>

int main() {
    int A=0, B=0, C=0, temp;
    std::string response="";
    std::vector<int> keys{};
    for(int i=0; i<3; i++){
        std::cin >>temp;
        keys.push_back(temp);
    }
    sort(keys.begin(), keys.end());
    A=keys.at(0);
    B=keys.at(1);
    C=keys.at(2);
    std::cin >> response;

    if(response=="ABC")
        std::cout << A  << " " << B<< " " << C;
    else if(response=="BAC")
        std::cout << B<< " "<< A<< " "<< C;
    else if(response=="BCA")
        std::cout << B<< " "<< C<< " "<< A;
    else if(response=="ACB")
        std::cout << A<< " "<< C<< " "<< B;
    else if(response=="CAB")
        std::cout << C<< " "<< A<< " "<< B;
    else if(response=="CBA")
        std::cout << C<< " "<< B<< " "<< A;


    return 0;
}