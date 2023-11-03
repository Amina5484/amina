//linked list 
#include<iostream>
using namespace std;
struct node{
	char name[20];
	int age;
	float height;
	node * nxt;
};
struct node* start_ptr = NULL;
void AddNode_at_end();
void AddNode_at_front();
void DeleteNode_from_start();
void DeleteNode_from_end();
void display();
int main(){
	int ch;
	do{
		cout<<"\n\t\t ***MAIN MENU***\n";
		cout<<"\t1.Add Node at the end\n \t2.Add Node at the front\n";
		cout<<"\t3.Delete Node at the end\n \t4.Delete Node at the front\n";
		cout<<"\t.5 Dsplay\n";
		cout<<"\t.6.exit\n";
		cout<<"\tEnter your choice:\n";
		cin>>ch;
		switch(ch){
			case 1:AddNode_at_end();
			break;
			case 2:AddNode_at_front();
			break;
			case 3:DeleteNode_from_start();
			break;
			case 4:DeleteNode_from_end();
			break;
			case 5:display();
			break;
			case 6:exit(0);
			break;
			 default:
			 cout<<"wrong choice\n";
		}
	}
	while(ch!=6);
}
void AddNode_at_end(){
	struct node *temp,*temp2;
	temp=new node;
	cout<<"enter name of the person:  ";
	cin>>temp->name;
	cout<<"enter age of the person:  ";
	cin>>temp->age;
	cout<<"enter heightof the person:  ";
	cin>>temp->height;
	temp->nxt=NULL;
	if(start_ptr == NULL)
	start_ptr=temp;
	else
	{
		temp2 = start_ptr;
		while(temp2->nxt != NULL){
			temp2=temp2->nxt;	
		}
		temp2->nxt =temp;
	}
}
void AddNode_at_front(){
	struct node*temp;
		temp=new node;
	cout<<"enter name of the person:  ";
	cin>>temp->name;
	cout<<"enter age of the person:  ";
	cin>>temp->age;
	cout<<"enter heightof the person:  ";
	cin>>temp->height;
	if(start_ptr==NULL){
			start_ptr=temp;
			start_ptr->nxt =NULL;
	}
	else
	{
		temp->nxt =start_ptr;
		start_ptr=temp;
	}	
}
void DeleteNode_from_start(){
	struct node*temp;
	if(start_ptr==NULL)
	cout<<"the list is empty\n";
	else{
	temp=start_ptr;
	if(temp->nxt ==NULL){
			delete temp;
	start_ptr=NULL;
	}
	else{
		start_ptr=start_ptr->nxt;
		delete temp;
	}	
	}
}
void DeleteNode_from_end(){
	struct node *temp1,*temp2;
	if(start_ptr==NULL)
	cout<<"the list is empty\n";
	else{
		temp1=start_ptr;
		if(temp1->nxt==NULL){
			delete temp1;
			start_ptr->nxt=NULL;
		}
		else
		{
			while(temp1->nxt!=NULL){
				temp2=temp1;
				temp1=temp1->nxt;
			}
			delete temp1;
			temp2->nxt=NULL;
		}
	}
}
void display(){
	struct node *temp2;
	temp2=start_ptr;
	cout<<"NAME\t\tAGE \t\tHEIGHT"<<endl;
	do{
		if(temp2==NULL)
		cout<<"empty list"<<endl;
		else
		{
			cout<<temp2->name<<"\t\t"<<temp2->age<<"\t\t"<<temp2->height<<endl;
			temp2=temp2->nxt;
		}
	}
	while(temp2!=NULL);
}
