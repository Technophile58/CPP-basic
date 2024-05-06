#include<iostream>
using namespace std;
int factorial(int n){
  int fact=1;
  while(n>=1){
        fact=fact*n;
        n=n-1;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
  int fact=factorial(n);
    cout<<"Factorial of "<<n<<" is :"<<fact;
}