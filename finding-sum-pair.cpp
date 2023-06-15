#include<iostream>
#include<algorithm>
using namespace std;
void findpair(int arr[],int n,int target){
    sort(arr,arr+n);
    int left = 0;
    int right = n-1;
    while(left<right){
        int sum = arr[left] +arr[right];
        if(sum == target){
            cout<<arr[left]<<" and "<<arr[right]<<endl;
            left++;
            right--;
        }
        else if(sum>target){
            right--;
        }
        else left++;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    findpair(arr,n,target);
    return 0;
}
