#include<iostream>
#include<cmath>
using namespace std;
int sum(int a,int b){
return a+b;}
int sub(int a,int b){
return a-b;}
int mul(int a,int b){
return a*b;}
float qnt(float a,float b){
return a/b;}
int rmndr(int a,int b){
return a%b;}
int main()
{
float a,b,add,diff,pro,divide,mod;
cout<<"enter two no:"<<endl;
cin>>a>>b;
add=sum(a,b);
cout<<"addition:	"<<add<<endl;
diff=sub(a,b);
cout<<"subtraction:	"<<diff<<endl;
pro=mul(a,b);
cout<<"multiplication:	"<<pro<<endl;
divide=qnt(a,b);
cout<<"division:	"<<divide<<endl;
mod=rmndr(a,b);
cout<<"reminder:	"<<mod<<endl;
cout<<"log of first value:	"<<log(a)<<endl;
cout<<"log of second value:	"<<log(b)<<endl;
cout<<"square root of first value:	"<<sqrt(a)<<endl;
cout<<"square root of second value:	"<<sqrt(b)<<endl;
}
