#include<iostream>
#include<stdio.h>
using namespace std;
void fib(int);
int main()
{ int n;
cout<<"enter the no";
cin>>n;
 int a,b,c;
a=0;
b=1;
cout<<"fib serioue:";

cout<<a<<"\n"<<b<<"\n";



for(int i=2;i<n;i++)
 {c=a+b;
 cout<<c<<"\n";
 a=b;
 b=c;


 }return 0;
}
