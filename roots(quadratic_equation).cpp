....................................................................................................................................................
#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a;int b;int c;
	cin>>a>>b>>c;
	// int ans1=(-b+(pow(b,2)-4*a*c)/2*a;
	// int ans2=(-b-(pow(b,2)-4*a*c)/2*a;
	int root = pow(b,2)-4*a*c;
	if(root>0){
		cout<<"Real and Distinct"<<endl;
			float ans1=(-b-(sqrt(root)))/(2*a);
			float ans2=(-b+(sqrt(root)))/(2*a);
			cout<<ans1<<" "<<ans2<<endl;
	}
	else if(root==0){
		cout<<"Real and Same"<<endl;
        float ans = -b/(2*a);
        cout<<ans<<" "<<ans<<endl;
	}
	else{
		cout<<"Imaginary";
	}
	return 0;
}
