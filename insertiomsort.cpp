#include <iostream>
using namespace std;

int insertion_sort(int arr[],int size){
	for(int i=1;i<size;i++){
		int current=arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
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
	insertion_sort(a,n);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}