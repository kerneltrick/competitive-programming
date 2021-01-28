#include <iostream>
#include <string>

int main() {

    int X=0, Y=0, N=0;
    std::cin >> X >> Y >> N;

    for(int i = 1; i<=N; i++ ){
        if(i%X==0 && i%Y==0){
            std::cout << "FizzBuzz" <<  std::endl;
        }else if(i%X==0){
            std::cout << "Fizz" <<  std::endl;
        }else if(i%Y==0){
            std::cout << "Buzz" <<  std::endl;
        }else {
            std::cout << i << std::endl;
        }
    }


    return 0;

}
