#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

std::vector<std::string> simonSays(std::vector<std::string> str_vec);

int main() {
    std::vector<std::string> commands={}, validCommands{};
    std::string response="";
    int n=0;

    std::cin >> n;
    std::cin.ignore();
    for(int i=0; i<n; i++){
        std::getline(std::cin,response);
        commands.push_back(response);
    }

    validCommands=simonSays(commands);

    for (auto s: validCommands)
        std::cout << s << std::endl;

    return 0;
}

std::vector<std::string> simonSays(std::vector<std::string> str_vec){
    std::string say_this="", test="";
    std::vector<std::string> validCommands;

    for (auto s: str_vec){
        test=s.substr(0,10);
        if(test=="Simon says"){
            say_this=s.substr(11, std::string::npos);
            validCommands.push_back(say_this);
        }
    }
    return validCommands;

}