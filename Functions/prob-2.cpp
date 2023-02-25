//Write a function to calculate the factorial of a number using recursion.

#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    } else {
        return n*factorial(n-1);
    }
}

int main()
{
    
    cout<<factorial(5)<<endl;
    
    return 0;
}
