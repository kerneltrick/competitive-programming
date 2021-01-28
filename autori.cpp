#include <iostream>
#include <string>

int main() {
    std::string ins="", outs = "";
    std::cin >> ins;
    for(int i=0; i<ins.size(); i++){
        if(isupper(ins.at(i))){
            outs += ins.at(i);
        }
    }
    std::cout << outs;
}
