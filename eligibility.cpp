#include <iostream>
#include <string>

int main() {


    struct student{
    int courses=0, birth_val=0, began_val=0;
    std::string name="", start_date="", birth_date="", eligibility="ineligible";
    };

    int count =0;
    std::cin >> count;
    student contestant[count];
    for(int i=0; i<count; i++){
        std::cin >> contestant[i].name >> contestant[i].start_date >> contestant[i].birth_date >> contestant[i].courses;
        contestant[i].began_val = std::stoi(contestant[i].start_date);
        contestant[i].birth_val = std::stoi(contestant[i].birth_date);
    }

    for(int i=0; i<count; i++){
        std:: cout << contestant[i].name << " ";
        if(contestant[i].birth_val>1990){
            std::cout << "eligible" << std::endl;
        }else if(contestant[i].began_val>2009){
            std::cout << "eligible" << std::endl;
        }else if(contestant[i].courses>40){
            std::cout << "ineligible" << std::endl;
        }else{
            std::cout << "coach petitions" << std::endl;
        }
    }

    return 0;

}
