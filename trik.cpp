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


void move(int cups[], char x){
    int temp;
    if(x=='A')
    {
        temp=cups[0];
        cups[0]=cups[1];
        cups[1]=temp;
        return;
    }
    else if(x=='B')
    {
        temp=cups[1];
        cups[1]=cups[2];
        cups[2]=temp;
        return;
    }
    else if(x=='C')
    {
        temp=cups[0];
        cups[0]=cups[2];
        cups[2]=temp;
        return;
    }
}

int main() {
    std::string response;
    int cups[]={1,0,0};
    std::cin >> response;
    for(int i=0; i< response.size();i++)
        move(cups, response.at(i));
    int sol=0;
    for(int i=0; i<3; i++)
    {
        if(cups[i]==1)
            sol=i+1;
    }
    std::cout << sol << std::endl;
    return 0;
}