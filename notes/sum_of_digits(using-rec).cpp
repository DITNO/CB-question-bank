// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int sum(int n){
    //basecase
    if(n == 0){
        return 0;
    }
    //rec case
    return n%10+sum(n/10);
    
}
int main() {
    // Write C++ code here
    int n = 5685;
    cout<<sum(n);
    

    return 0;
}
