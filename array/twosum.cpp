#include<iostream>
#include<vector>
using namespace std;
pair<int,int>checkTwosum(int arr[],int size,int target){
    //assuming (-1,-1 )as no answer find
    pair<int,int>ans=make_pair(-1,-1);
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        if(arr[i]+arr[j]==target){
            ans.first=arr[i];
            ans.second=arr[j];
            return ans;
        }
    }
}
return ans;
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    int target=60 ;
    pair<int,int>ans=checkTwosum(arr,size,target);
    if(ans.first==-1 && ans.second==-1){
        cout<<"Pair not found";
    }
    else{
        cout<<"Pair Found :"<<ans.first<<" and "<<ans.second;
    }
    return 0;

}
