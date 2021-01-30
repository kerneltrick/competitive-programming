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


int main() {
    int stuck=0;
    std::cin >> stuck;

    std::vector<std::vector<int>> tree;
    std::vector<int> branch;

    std::string line;
    int kat=0;

    while(kat!=(-1)){
        branch.clear();
        getline(std::cin, line);
        std::istringstream ss(line);
        while(ss >> kat)
        {
            if (kat==(-1))
                break;
            branch.push_back(kat);
        }
        if(!branch.empty())
            tree.push_back(branch);
    }

    std::set<int> parents, children;

    for(auto br: tree){
        for(int i=0; i<br.size(); i++)
        {
            if(i>0)
                children.insert(br.at(i));
            else
                parents.insert(br.at(0));
        }
    }

    int root=0, position=stuck;

    for(auto p: parents){
        if(children.find(p)==children.end())
            root=p;
    }

    std::vector<int> path;
    path.push_back(stuck);

    while (position!=root)
    {
        for(auto subtree: tree)
        {
            for(int i=1; i<subtree.size(); i++)
            {
                if(subtree.at(i)==position) {
                    path.push_back(subtree.at(0));
                    position=subtree.at(0);
                    break;
                }
            }
        }
    }

    for(auto v: path)
        std::cout << v << " ";

    std::cout << std::endl;

    return 0;
}
