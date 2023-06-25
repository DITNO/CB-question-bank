// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int expo(int base,int n){
    //base case
    if(n == 0){
        return 1;
    }
    //rec case
    return base*expo(base,n-1);
}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int base = 2;
    cout<<expo(base,n);

    return 0;
}
