#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int a[]={10,5,10,15,10,5};
    unordered_map<int,int> umap;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        umap[a[i]]++;
    }
    int maxEle=0,maxFreq=0;
    int minEle=0,minFreq=sizeof(a)/sizeof(a[0]);
    for(auto it:umap){
        int c=it.second;
        int e=it.first;
        if(c>maxFreq){
            maxEle=e;
            maxFreq=c;
        }
        if(c<minFreq){
            minEle=e;
            minFreq=c;
        }
    }
    cout<<"max "<<maxEle<<endl;
    cout<<"min "<<minEle<<endl;
    return 0;
}