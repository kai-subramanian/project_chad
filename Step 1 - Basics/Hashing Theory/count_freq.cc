#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int a[]={2,2,3,4,4,2};
    unordered_map<int, int> umap;
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        if(umap.find(a[i])==umap.end()){
            umap[a[i]]=1;
        }else{
            umap[a[i]]+=1;
        }
    }
    for(auto x:umap){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}