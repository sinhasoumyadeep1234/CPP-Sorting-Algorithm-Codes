#include <iostream>
using namespace std;

int selection_sort(int arr[],int size){
	int i,j,temp;
		for(i=0;i<size-1;i++){
			for(j=i+1;j<size;j++){
				if(arr[j]<arr[i]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
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
	selection_sort(a,n);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}