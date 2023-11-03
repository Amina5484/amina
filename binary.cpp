#include<iostream>
using namespace std;
int main(){
	int key;
	int n;
	int list[20];
	int binary_search(int[],int,int);
	cout<<"enter your number"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>list[i];
	for(int i=0;i<n;i++)
	cout<<"["<<list[i]<<"]"<<" ";
	cout<<endl;
	cout<<"enter your key"<<endl;
	cin>>key;
	int result=binary_search(list,key,n);
	if(result==-1)
	cout<<"the item is not found\n";
	else
	cout<<"the item is found at index"<<result<< " " <<  "the value is ="<<list[result];
	return 0;
	
}
int binary_search(int list[20],int key,int n){
	int left=0;
	int right=n-1;
	int found=0;
	int mid;
	int index;
	do{
		mid=(left+right)/2;
		if(key==list[mid])
		found=1;
		else
		if(key<list[mid])
		right=mid-1;
		else
		left=mid+1;
	}while(found==0&&left<right);
	if(found==0)
	index=-1;
	else
	index=mid;
	return index;
	}


