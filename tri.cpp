#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>



int main() {
    int a=0, b=0, c=0;
    std::cin >> a >> b >> c;

    if((a+b)==c)
        std::cout << a << "+" << b << "=" << c << std::endl;
    else if((a-b)==c)
        std::cout << a << "-" << b << "=" << c << std::endl;
    else if((a*b)==c)
        std::cout << a << "*" << b << "=" << c << std::endl;
    else if((a/b)==c)
        std::cout << a << "/" << b << "=" << c << std::endl;
    else if (a==(b+c))
        std::cout << a << "=" << b << "+" << c << std::endl;
    else if (a==(b-c))
        std::cout << a << "=" << b << "-" << c << std::endl;
    else if (a==(b*c))
        std::cout << a << "=" << b << "*" << c << std::endl;
    else if (a==(b/c))
        std::cout << a << "=" << b << "/" << c << std::endl;


    return 0;


}