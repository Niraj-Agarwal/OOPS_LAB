#include<iostream>
using namespace std;
#define size 10
class stack
{
int array[size]; 
int top;
public:
void init();
void push();
void pop();
void display();
};
int main()
{
stack s;
s.init();
int choice;
while(1)
{
cout<<"\nEnter the operation who want::\n"<<endl;
cout<<"\n1.push 2.pop. 3. display 4.exit"<<endl;
cin>>choice;
switch(choice)
{
case 1: s.push();
break;
case 2: s.pop();
break;
case 3: s.display();
break;
default: cout<<"Invalid choice";
exit(1);
}}
 return 0;
 }
 void stack::init()
 {
 top=0;
 array[size]=0;
 }
 void stack::push()
 {
 int i;
 if(top==size)
 {
 cout<<"overflow"<<endl;
 }
 else{
 cout<<"enter value::";
 cin>>i;
 array[top]=i;
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
