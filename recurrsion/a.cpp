#include<iostream>
using namespace std;
 
void recurrsion(int n){
    if(n==0) return;
    
    cout << "I love Recursion" << endl;
    recurrsion(n-1);
}
 
int main(){
    int n=0;
    cin>>n;
    recurrsion(n);
}