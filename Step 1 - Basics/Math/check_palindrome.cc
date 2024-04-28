#include<iostream>
using namespace std;

int main(){
    string s="malayalam";
    int l=0;
    int r=s.length()-1;
    bool isPalindrome=true;
    while(l!=r){
        if(s[l]!=s[r]){
            isPalindrome=false;
            break;
        }
        l++;
        r--;
    }
    if(isPalindrome){
        cout<<"Yes, "<<s<<" is a palindrome"<<endl;
    }else{
        cout<<"No, "<<s<<" is not a palindrome"<<endl;
    }
    return 0;
}