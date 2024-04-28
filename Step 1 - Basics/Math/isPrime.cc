#include<iostream>
#include<cmath>
using namespace std;

int main(){
    for(int x=2;x<=100;x++){
        bool isPrime=true;
        for(int i=2;i<=sqrt(x);i++){
            if(x%i==0){
                isPrime=false;
                break;
            }
        }

        if(isPrime){
            cout<<x<<" Yes, prime"<<endl;
        }
    }
    
    return 0;
}