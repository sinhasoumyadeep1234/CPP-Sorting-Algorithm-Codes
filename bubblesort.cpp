#include <iostream>
using namespace std;

int bubble_sort(int arr[],int size){
	int count=1;
	int i,j,temp;
	while(count<size){
		for(i=0;i<size-count;i++){
			if(arr[i]>arr[i+1]){
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			}
		}
		count++;
	}
	
}
int main(){
	int n,i;
	cout<<"Enter the array size"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the array elements to sort them"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	bubble_sort(a,n);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}