#include<bits/stdc++.h>
using namespace std;
int main(){
 int size,i,n,p,k;
 cout<<"Enter the size of array"<<endl;
 cin>>size;
 int arr[size];
 cout<<"Enter the values in the array"<<endl;
 for(i=0;i<=size-1;i++){
 	cin>>arr[i];
 	}
 for(i=size-1;i>=0;i--){
 	cout<<arr[i]<<endl;
 }
 cout<<"Enter the value you want to search"<<endl;
 cin>>p;
 for(i=0;i<=size-1;i++){
 	if(p==arr[i]){
  	cout<<"Number found in the array"<<endl;
  	k=1;
  	}
  }
   if (k!=1){
   	cout<<"Number not found"<<endl;
   }
   
   	
return 0;
}

