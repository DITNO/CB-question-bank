#include<iostream>
using namespace std;

void multiply(int arr[],int &nti,int ntp){
	int tp = 0;
	int carry = 0;
	int i=0;
	for(i=0 ; i<nti ; i++){
	tp = arr[i]*ntp +carry;
	arr[i] = tp%10;
	carry = tp/10;
	}
	while(carry > 0){
		arr[i] = carry%10;
		i++;
		nti++;
		carry = carry/10;
	}
}
// void print(int arr[],int n){

// }

void fact(int n){
	int arr[100];
	int nti = 1;
	int ntp = 1;
	arr[0] = 1;
	multiply(arr,nti,ntp);
	for(int i=n-1;i>=0;i--){
		cout<<arr[i];
	}
}


int main() {
	int n;
	cin>>n;
	int arr[1000] = {'\0'};
	fact(n);
	// for(int i=n;i>0;i--){
	// 	cout<<arr[i];
	// }
	return 0;
}
