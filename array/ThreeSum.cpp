#include<iostream>
#include<vector>
using namespace std;
void checkthreesum(int arr[],int size,int target){
      //assuming (-1,-1 )as no answer find
   
for(int i=0;i<size;i++){
    for (int j = 0; j < size; j++)
    {
        for(int k=0;k<size;k++){
            if(arr[i]+arr[j]+arr[k]==target){
                cout<<"Pair found of "<<target<<" is :"<<"("<<arr[i]<<" ,"<<arr[j]<<","<<arr[k]<<")";
                return;
            }
        }
    }
    
}
return;
}

void checkthreesum2(int arr[],int size,int target){
      //assuming (-1,-1 )as no answer find
   
for(int i=0;i<size;i++){
    for (int j = i+1; j < size; j++)
    {
        for(int k=j+1;k<size;k++){
            if(arr[i]+arr[j]+arr[k]==target){
                cout<<"Pair found of "<<target<<" is :"<<"("<<arr[i]<<" ,"<<arr[j]<<","<<arr[k]<<")";
                return;
            }
        }
    }
    
}
return;
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    int target=60;
    // checkthreesum(arr,size,target);
    checkthreesum2(arr,size,target);
    return 0;

}