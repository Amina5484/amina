#include <iostream> 
using namespace std; 
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main() 
{ 
    int n;
	int data[20];
	void bubble_sort(int data[],int n);
	cout<<"enter size of array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>data[i];
	cout<<"enter your element "<<endl;
	for(int i=0;i<n;i++)
	cout<<"["<<data[i]<<"]"<<" ";
	cout<<endl;
	cout<<" your array after sorting"<<endl;
	bubble_sort(arr[],n);
	for(int i=0;i<n;i++)
	cout<<"["<<arr[i]<<"]"<<" ";
	return 0;
}
