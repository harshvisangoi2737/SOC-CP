#include<iostream>
using namespace std;
 
int fibonnaci(int s){
    if(s==0) return 0;
    if(s==-1) return 0;
    if(s==1) return 1;
    
    return fibonnaci(s-1) + fibonnaci(s-2);
}
 
 
int main(){
    
    int s=0;
    cin>>s;
    
    cout<<fibonnaci(s-1);
}