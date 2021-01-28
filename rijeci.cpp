#include <iostream>
#include <string>
void bottom_up_solution(int k);
int tabular_fib(int n);

int main() 
{
    int mirko=0;
    std::cin >> mirko;
    bottom_up_solution(mirko);
}
void bottom_up_solution(int k)
{
    int A=0, B=0;
    A=tabular_fib(k-1);
    B=tabular_fib(k);
    std::cout << A << " " << B;
}
int tabular_fib (int n)
{
    int f[n+1];
    f[0] = 0;   f[1] = 1;
    for (int i = 2; i <= n; i++)
        f[i] = f[i - 1] + f[i - 2];
    return f[n];
}