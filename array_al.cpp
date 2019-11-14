#include<iostream.h>
	void insertion_at_begining()
{
	int a[10],i,num,value;
	cout<<"Enter the value of num= ";
	cin>>num;
	cout<<"Enter the element in Array= ";
	for(i=0;i<num;i++)
{
		cin>>a[i];

}
	cout<<"Enter the value in Array= ";
	cin>>value;
	for(i=num-1;i>=num-num;i--)
{
		a[i+1]=a[i];
}
	a[num-num]=value;
	cout<<"INSERTED RESULT= ";
	for(i=0;i<=num;i++)
{
		cout<<"\n"<<"\t\t"<<a[i]<<"\n";
}
}
	void insert_at_disered()
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
}
	void insertion_at_last()
{
	int a[10],i,num,value;
	cout<<"Enter the value of num= ";
	cin>>num;
	cout<<"Enter the element in Array= ";
	for(i=0;i<num;i++)
{
		cin>>a[i];

}
	cout<<"Enter the value in Array= ";
	cin>>value;
	for(i=num-1;i>num;i--)
{
		a[i+1]=a[i];
}
	a[num]=value;
	cout<<"INSERTED RESULT= ";
	for(i=0;i<=num;i++)
{
		cout<<"\n"<<"\t\t"<<a[i]<<"\n";
}
}
	void detetion_at_begining()
{
	int i,a[10],n;
	cout<<"Enter the value of array";
	cin>>n;
	cout<<"Insert the element of array "<<"\n";
	for(i=0;i<n;i++)
{
	cin>>a[i];
}
	for(i=0;i<n;i++)
{
	a[i]=a[i+1];
}
	for(i=0;i<n-1;i++)
{
	cout<<"RESULT=>"<<a[i]<<"\n";
}
}
	void deletion_at_desired()
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
}
	void last_at_deletion()
{
	int i,a[10],n;
	cout<<"Enter the value of array";
	cin>>n;
	cout<<"Insert the element of array "<<"\n";
	for(i=0;i<n;i++)
{
	cin>>a[i];
}
	for(i=n-1;i<n;i++)
{
	a[i]=a[i+1];
}
	for(i=0;i<n-1;i++)
{
	cout<<"RESULT=>"<<a[i]<<"\n";
}
}
	void main()
{
	cout<<"Insert at begining";
	insertion_at_begining();
	cout<<"\n value of insert desired \n";
	insert_at_disered();
	cout<<"\nInsertion at last\n";
	 insertion_at_last();
	cout<<"\nDeletin at begining\n";
	detetion_at_begining();
	cout<<"\n Deletion at desired\n";
	deletion_at_desired();
	cout<<"\n Deletion at last\n";
	last_at_deletion();
}
