#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>
#define pi 3.14159265359

int adrian(std::string key){
    int k=0;
    for(int i=0; i<key.size(); i++)
    {
        if(i%3==0 && key.at(i)=='A')
            k++;
        if(i%3==1 && key.at(i)=='B')
            k++;
        if(i%3==2 && key.at(i)=='C')
            k++;
    }
    return k;
}


int bruno(std::string key){
    int k=0;
    for(int i=0; i<key.size(); i++)
    {
        if(i%4==1 && key.at(i)=='A')
            k++;
        if((i%4==0||i%4==2) && key.at(i)=='B')
            k++;
        if(i%4==3 && key.at(i)=='C')
            k++;
    }
    return k;
}


int goran(std::string key){
    int k=0;
    for(int i=0; i<key.size(); i++)
    {
        if(((i%6==0)||(i%6==1)) && key.at(i)=='C')
            k++;
        if(((i%6==2)||(i%6==3)) && key.at(i)=='A')
            k++;
        if(((i%6==4)||(i%6==5)) && key.at(i)=='B')
            k++;
    }
    return k;
}

int main() {
    int n=0, max=0;
    std::string key;

    std::cin >> n >> key;

    max=adrian(key);
    if(bruno(key)>max)
        max=bruno(key);
    if(goran(key)>max)
        max=goran(key);

    std::cout << max << std::endl;

    if(adrian(key)==max)
        std::cout << "Adrian" << std::endl;
    if(bruno(key)==max)
        std::cout << "Bruno" << std::endl;
    if(goran(key)==max)
        std::cout << "Goran" << std::endl;

    return 0;
}