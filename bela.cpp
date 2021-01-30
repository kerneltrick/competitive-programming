#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <cmath>
#include <map>
#include <tuple>
#include <utility>
#include <set>
#include <algorithm>
#define pi 3.14159265359

int calculate(std::pair<char, char> card, char dom) {
    if (card.first == 'A')
        return 11;
    else if (card.first == 'K')
        return 4;
    else if (card.first == 'Q')
        return 3;
    else if (card.first == 'J')
    {
        if (card.second == dom)
            return 20;
        else
            return 2;
    }
    else if(card.first=='T')
        return 10;
    else if(card.first=='9')
    {
        if (card.second == dom)
            return 14;
        else
            return 0;
    }
    else
        return 0;
}

int main() {
    char card=' ',suit =' ', dominantSuit=' ';
    std::pair<char,char> hand;
    int score=0, n=0;

    std::cin >> n >> dominantSuit;

    for(int i=0; i<(4*n); i++)
    {
        std::cin >> card >> suit;
        hand=std::make_pair(card, suit);
        score += calculate(hand, dominantSuit);
    }

    std::cout << score << std::endl;

    return 0;
}
