#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
	int n;
	int arr1[n];
	int arr2[n];
	int arr3[1000];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	int k = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr1[i] == arr2[j]){
				arr3[k]= arr1[i];
				arr2[j] = INT_MIN;
				k++;
				break;
			}
		}
	}
	sort(arr3,arr3+k);
	for(int i=0;i<k;i++){
		cout<<arr3[i]<<" ";
	}
	return 0;
}
