#include<iostream>
#include<climits>
using namespace std;

int subarraysum(int arr[], int n){
	int max_i = 0;
	int max_j = 0;
	int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
			int sum = 0;
		for(int j=0;j<n;j++){
				sum += arr[j];
	if(sum>maxsum){
		maxsum = sum;
		max_i = i;
		max_j = j;
			}
		}
	}
	return maxsum;
    
}

int main(){
	int t;
	cin>>t;
	while(t--){
    int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

    cout<<subarraysum(arr,n)<<endl;
	}

}
