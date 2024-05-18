#include<iostream>
using namespace std;

int main(){

    int arr1[10];
    for(int i=0;i<5;i++){
        cout<<"Enter the value for index "<<i<<":";
        cin>>arr1[i];
    
    }
    for(int j=0;j<5;j++){
        cout<<"The value at index "<<j<<" is :"<<arr1[j]<<endl;
    }
}