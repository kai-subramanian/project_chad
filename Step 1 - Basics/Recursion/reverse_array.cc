#include<iostream>
using namespace std;
void reversor(int s[],int l, int r){
    if(l>=r){
        return;
    }
    int temp=0;
    temp=s[l];
    s[l]=s[r];
    s[r]=temp;
    reversor(s,l+1,r-1);
}
int main(){
    int a[]={1,2,3,4,5};
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reversor(a,0,(sizeof(a)/sizeof(a[0]))-1);
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}