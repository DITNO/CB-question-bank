// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool sorted1(int arr[],int n){
    //base case
    if(n == 1){
        return true;
    }
    //rec case
    // if(sorted1(arr+1,n-1) and arr[0]<=arr[1]){
    //     return true;
    // }
    //or
    return arr[0]<=arr[1] and sorted1(arr+1,n-1);
}

bool sorted2(int arr[],int n){
    //base case
    if(n == 2){
        return true;
    }
    //rec case
    return arr[n -2] <= arr[n-1] and sorted2(arr,n-1);
}

bool sorted3(int arr[],int n,int i){
    //base case
    if(i == n-1){
        return true;
    }
    //rec case
    return arr[i]<=arr[i+1] and sorted3(arr,n,i+1);
    
}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // if(sorted(arr,n) != true){
    //     cout<<"unsorted";
    // }
    // else cout<<"sorted";
    if(sorted1(arr,n)){
        cout<<"sorted";
    }
    else cout<<"unsorted";

    return 0;
}
