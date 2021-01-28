#include <iostream>
#include <string>

int main() {

    std::string doc="", jon="";
    int requirement=0, attempt=0;
    std::cin >> jon >> doc;
    for(auto a: doc){
        if(a=='a'){
            requirement++;
        }
    }
    for(auto a: jon){
        if(a=='a'){
            attempt++;
        }
    }

    if (attempt>=requirement){
        std::cout<<"go";
    }else{
        std::cout<< "no";
    }

    return 0;
}
