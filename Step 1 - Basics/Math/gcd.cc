#include<iostream>
using namespace std;

int gcd(int x,int y){
    if(y==0){
        return x;
    }
    return gcd(x,y%x);
}

int main(){
    int a=0;
    int b=0;
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<ans<<endl;
    return 0;
}