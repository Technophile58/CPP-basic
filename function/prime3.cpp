#include<iostream>
using namespace std;
int main(){
    int n,i;
    for(n=1;n<=100;n++){
        int count =0;
        for(i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
           
        }
         if(count==2){
                cout<<n<<" " ;
            }
    }
}