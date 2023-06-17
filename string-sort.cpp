#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool comp(string a,string b){
	int al = a.length();
	int bl = b.length();
	if(bl<al && a.substr(0,bl)==b){
	return a>b;
	}
	return a<b;
	
}

int main() {
	string arr[1000];
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n,comp);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
