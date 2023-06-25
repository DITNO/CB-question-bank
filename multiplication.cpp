// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int multi(int base,int n){
    //base case
    if(n == 1){
        return base;
    }
    //rec case
    return base+multi(base,n-1);
}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int base;
    cin>>base;
    
    cout<<multi(base,n);

    return 0;
}
