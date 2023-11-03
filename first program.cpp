#include<iostream>
using namespace std;
int main(){
  cout<<"Enter your number";
  int key,n;
  int list[20];
  int linear_search(int[],int,int);
  cout<<"enter the size of the array\n";
  cin>>n;
  for(int i=0;i<n;i++)
  cin>>list[i];
  cout<<"your array elements are\n";
  for(int i=0;i<n;i++)
    cout<<"["<<list[i]<<"] ";
    cout<<endl;
    cout<<"enter the key";
    cin>>key;
    int result=linear_search(list,key,n);
    if(result==-1){
      cout<<"the item is not found";
      
    }
    else
    cout<<"the item is found in the index :"<<result<<" the value is "<<list[result];
    return 0;
    
  
}
int linear_search(int list[],int key,int n){
  int index=0;
  int found=0;
  do{
    if(key==list[index])
    found=1;
    else
    index++;
    
  }
  while(found==0&&index<n);
  if(found==0)
  index=-1;
  return index;
}
