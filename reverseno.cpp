#include<iostream>
using namespace std;
int reverseNumber(int n){
     int rev=0,rem;
     while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter the no :";
    cin>>n;
   int rev=reverseNumber(n);
    cout<<"Reverse of "<<n<< " is:"<<rev;
  
}