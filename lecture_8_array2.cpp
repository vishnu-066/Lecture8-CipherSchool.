// code for taking input from user that values storing in an array than displayoing the data.

#include<iostream>
using namespace std;
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

//----------------------------------------------------------------------------------------------------------------------------

//code for taking input from user and displaying them in reverse order.

#include<iostream>
using namespace std;
int main(){
	int n;      //n represents no of inputs enterd by user.
	cout<<"Enter no of inputs : ";
	cin>>n;
	cout<<"Enter the values: ";
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	return 0;
}

