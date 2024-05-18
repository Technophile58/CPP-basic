// array is always pass by reference
//give array and its size always while calling function
#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    // cout<<arr[2];
    for(int i=0;i<size;i++){
        cout<<"Value at "<<i<<" is:"<<arr[i]<<endl;
    }
}
int main(){
    int arr[5]={11,22,33,44,55};
    int size =5;
    printArray(arr,size);
    return 0;

}