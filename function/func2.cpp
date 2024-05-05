#include<iostream>
using namespace std;

float SI(float P,float R,float T){
float si=(P*R*T)/100;
return si;
}

int main(){
    float P = 10000; // Principal amount
    float R = 6.25; // Rate of interest
    float T = 7; // Time in years

    float simpleInterest=SI(P,R,T);
    cout<<"Simple interest for "<<P<< " with ROI " <<R<< "% "<<"for " <<T<<" years is: "<<simpleInterest<<endl;
    cout << "Total amount is: " << P + simpleInterest;
    return 0;
}
