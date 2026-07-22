raising bac 

#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;

    int y = 0;
    while (x) {
        y+=x & 1;  
        x>>= 1;      
    }

    cout << y;
    return 0;
}