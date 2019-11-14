#include<iostream.h>
void main()
{
int i,a[10],n,loc;
cout<<"Enter the value of array";
cin>>n;
cout<<"Insert the element of array "<<"\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Enter the lucation";
cin>>loc;
for(i=loc-1;i<n;i++)
{
a[i]=a[i+1];
}
for(i=0;i<n-1;i++)
{
cout<<"RESULT=>"<<a[i]<<"\n";
}
cout<<"\n"<<"NAME=JAGDEESH KUSHWAHA"<<"\n";
cout<<"ROLL No. 15025C04026";
}
