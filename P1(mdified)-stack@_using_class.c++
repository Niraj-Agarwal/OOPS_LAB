#include<iostream>
using namespace std;
#define size 10
class stack
{
int array[size]; 
int top;
public:
void init();
void push(int x);
void pop();
void display();
void peek();
};
int main()
{
stack s;
s.init();
int choice;

//cout<<"\nEnter the operation who want::\n"<<endl;
//cout<<"\n 2.pop. 3. display 4.peek 5.exit"<<endl;
s.push(10);
s.push(100);
s.push(102);
s.display();
cout<<endl;
s.pop();
s.pop();
s.push(199);
s.display();
s.peek();
 return 0;
 }
 void stack::init()
 {
 top=0;
 array[size]=0;
 }
 void stack::push(int x)
 {
 int i;
 if(top==size)
 {
 cout<<"overflow"<<endl;
 }
 else{
 /*cout<<"enter value::";
 cin>>i;*/
 array[top]=x;
 top++;
 }
 
 }
 
 void stack::pop()
 {
 if(top==0)
 cout<<"underflow";
 else
  top--;
 cout<<array[top]<<" is popped\n";

 }
 
 void stack::display()
 {
 if(top==0)
 cout<<"stack  is empty::";
 else
 {
 for(int i=0;i<top;i++)
 {
 cout<<array[i]<<"\t";
 }
 }
 }
 void stack::peek()
 {
 	cout<<"\npeek is::"<<array[top-1];
 }
 
