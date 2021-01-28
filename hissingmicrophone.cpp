#include <iostream>
#include <string>

int main() {
    int conf=0;
    char k;
    std::string response = "";
    std::cin >> response;
    for (auto a: response){
        if(a=='s'&& k=='s'){
            conf=1;
        }else if (a=='s'){
            k=a;
        }else{
            k='a';
        }
    }

    if(conf==1){
        std::cout << "hiss";
    }else{
        std::cout << "no hiss";
    }

    return 0;
}
