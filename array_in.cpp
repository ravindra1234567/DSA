#include<iostream.h>
void main()
{
	int a[10],i,num,location,value;
	cout<<"Enter the value of num= ";
	cin>>num;
	cout<<"Enter the element in Array= ";
	for(i=0;i<num;i++)
	{
		cin>>a[i];

	}
	cout<<"Enter the location in Array=";
	cin>>location;
	cout<<"Enter the value in Array= ";
	cin>>value;
	for(i=num-1;i>=location-1;i--)
	{
		a[i+1]=a[i];
	}
	a[location-1]=value;
	cout<<"INSERTED RESULT= ";
	for(i=0;i<=num;i++)
	{
		cout<<"\n"<<"\t\t"<<a[i]<<"\n";
	}
	cout<<"=>RAVINDRA KUMAR KUSHWAHA ROLL NUMBER 15025C04048";
	}