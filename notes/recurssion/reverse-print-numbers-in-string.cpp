// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

    string arr[] = {
        "zero","one","two","three","four","five","six","seven","eight","nine"
    };
    
void print(int n){
    //base case
    if(n == 0){
        return;
    }
    
    //rec case
    cout<<arr[n%10]<<" ";
    print(n/10);
}

int main() {
    
    int n;
    cin>>n;
    if(n == 0){
        cout<<"zero";
    }
    print(n);

    return 0;
}
