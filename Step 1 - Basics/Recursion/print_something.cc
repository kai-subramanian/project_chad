#include<iostream>
using namespace std;
void printer(int n){
    if(n==0){
        return;
    }
    
    cout<<n<<endl;

    printer(n-1);
}
int main(){
    printer(5);
    return 0;
}