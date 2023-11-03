#include<iostream>
using namespace std;
int main(){
int n;
int list[20];
	void selection_sort(int data[],int n);
	cout<<"enter size of array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>list[i];
	cout<<"enter your element "<<endl;
	for(int i=0;i<n;i++)
	cout<<"["<<list[i]<<"]"<<" ";
	cout<<endl;
	cout<<" your array after sorting"<<endl;
	selection_sort(list,n);
	for(int i=0;i<n;i++)
	cout<<"["<<list[i]<<"]"<<" ";
}
void selection_sort(int list[],int n){
	int smallest,i,j;
	for(i=0;i<n-1;i++){
		smallest=i;
		for( j=i+1;j<n;j++){
			if(list[j]<list[smallest])
			smallest=j;
		}
		int temp=list[smallest];
		list[smallest]=list[i];
		list[i]=temp;
		
	}
}

