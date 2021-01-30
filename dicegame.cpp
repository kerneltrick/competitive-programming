#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

double getProb(int a1, int b1, int a2, int b2){
    int count1=0, count2=0, sum1=a1, sum2=a2;
    double prob=0;
    count1=(b1-a1+1);
    count2=(b2-a2+1);
    for (int i=a1; i<b1; i++){
        a1++;
        sum1+=a1;
    }
    for (int i=a2; i<b2; i++){
        a2++;
        sum2+=a2;
    }

    prob=((static_cast<double>(sum1)/count1)+(static_cast<double>(sum2)/count2));
    return prob;
}

int main() {
    int emmaA1=0, emmaA2=0,emmaB1=0, emmaB2=0;
    int gunnarA1=0, gunnarA2=0,gunnarB1=0, gunnarB2=0;
    double gunnarProb=0, emmaProb=0;

    std::cin >> gunnarA1 >> gunnarB1 >> gunnarA2 >>gunnarB2 >>  emmaA1 >> emmaB1 >> emmaA2 >> emmaB2;

    gunnarProb=getProb(gunnarA1, gunnarB1, gunnarA2, gunnarB2);
    emmaProb=getProb(emmaA1, emmaB1, emmaA2, emmaB2);

    if(gunnarProb>emmaProb)
        std::cout << "Gunnar";
    else if(emmaProb>gunnarProb)
        std::cout << "Emma";
    else
        std::cout << "Tie";
    return 0;
}