#include<iostream>
#include<algorithm>
using namespace std;
void findtriplets(int arr[],int size,int target){
	sort(arr,arr+size);
	for(int i=0;i<size;i++){
	int left = i+1;
	int right = size - 1;
	while(left<right){
		int sum = arr[i]+arr[left]+arr[right];
		if(sum == target){
			cout<<arr[i]<<", "<<arr[left]<<" and "<<arr[right]<<endl;
			right--;
			left++;
		}
		else if(sum > target){
			right--;		
			}
		else left++;
	}
	}
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	findtriplets(arr,n,target);
	return 0;
}
