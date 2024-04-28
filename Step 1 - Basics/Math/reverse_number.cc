#include<iostream>
using namespace std;

int main(){
    int x=4812;
    int rev=0;
    while(x!=0){
        int rem=x%10;
        rev*=10;
        rev+=rem;
        x=x/10;
    }
    cout<<rev<<endl;
    return 0;
}