//**********RECURSION**********
//Recursion means function calling itself
//A function called within same function
//Recusrion breaks a big probelem into small problem.

//Condiitons:
// 1. Performing the same operation multiple times with different inputs.
// 2. In every step we try smaller input to make problem smaller.
// 3. base condition is need to stop the recursion otherwise it will go in infinite loop.
#include<iostream>
using namespace std;
int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevSum = Sum(n-1);
    return n + prevSum;
}
int main() {
    int n;
    cin>>n;
    cout<<Sum(n)<<endl;
}
