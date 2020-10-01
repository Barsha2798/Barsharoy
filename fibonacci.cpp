#include<iostream>

using namespace std;

int main(){
	int n,i;
	int a=0;
	int b=1;
	int c;
	cout<<"Enter any number"<<endl;
	cin>>n;
	cout<<a<<endl;
	cout<<b<<endl;
	for(i=0; i<n-2; i++){
	 c=a+b;
	 cout<<c<<endl;
	 a=b;
	 b=c;
	}
	return 0;
	}
