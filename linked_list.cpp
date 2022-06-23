#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node*next;
    
};
void insert(node *&head,int x){
 node *n=new node();
 n->data=x;
 n->next=NULL;
 if(head==NULL){
     head=n;
     return;
 }
 node *temp;
 temp=head;
 while(temp->next!=NULL){
    temp=temp->next;
    
 }
 temp->next=n;
 
 
}
int main(){
   node *head=NULL;
   int n;
   cout<<"how many elaments you want to insert in linked list"<<endl;
   cin>>n;
   int num;
   for(int i=1;i<=n;i++){
       cin>>num;
       insert(head,num);
   }
   node*temp=head;
   while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
   }
  
   
}