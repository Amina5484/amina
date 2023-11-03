#include<iostream>
using namespace std;
int main(){
int n;
	int data[20];
	void insertion_sort(int data[],int n);
	cout<<"enter size of array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>data[i];
	cout<<"enter your element "<<endl;
	for(int i=0;i<n;i++)
	cout<<"["<<data[i]<<"]"<<" ";
	cout<<endl;
	cout<<" your array after sorting"<<endl;
	insertion_sort(data,n);
	for(int i=0;i<n;i++)
	cout<<"["<<data[i]<<"]"<<" ";
}
	
	void insertion_sort(int data[],int n){
		
		for(int i=1,j;i<n;i++)
		{
			int temp=data[i];
			for( j=i;j>0&&temp<data[j-1];j--)
				data[j]=data[j-1];
				data[j]=temp;
		
		}
	}
