#include<iostream>
using namespace std;

int sum1(int arr[],int n){
    //base case
    if(n == 0){
        return 0;
    }
    
    //rec case
    return arr[n-1]+sum1(arr,n-1);
}

int sum2(int arr[],int n){
    //base case
    if(n == 0 )
    
    //rec case
    return arr[0]+sum2(arr+1,n-1);
}

int sum3(int arr[],int n,int i){
    //base case
    if(i == n){
        return 0;
    }
    
    //rec case
    return arr[i]+sum3(arr,n,i+1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sum1(arr,n);
}
