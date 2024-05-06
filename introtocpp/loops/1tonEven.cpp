
#include <iostream>
using namespace std;
int main() {

    int n,count=0;
    cout<<"Enter the value of n :";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(i%2==0){
            cout<<i <<" ";
        }
    }
    return 0;
}
