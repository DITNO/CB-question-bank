#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int main() {
	int arr[32] = {0};
	int m = INT_MIN;
	int n,no;
	cin>>n;
	int i = 0;
	for(int i=0;i<n;i++){
		cin>>no;
		m = max(m,no);
		while(no > 0){
		if(no & 1 == 1){
			arr[i]++;
		}
		i++;
		no = no>>1;
	}
	}
	for(int k = 0;k<32;k++){
		arr[i] = arr[i]%3;
		//check for the unique number
	}
	int count = 0;
	while(m>0){
		m>>1;
		count++;
		//
	}
	int sum = 0;
	for(int l = count - 1;l>=0;l--){
		sum += arr[l]*pow(2,l);
		//conversion of number to decimal
	}
	cout<<sum;
	return 0;
}
