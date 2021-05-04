#include<iostream>
using namespace std;

void swap(int *a , int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	cout<<"\n In swap a= "<<a<<" b = "<<b<<endl;
	cout<<"\n In swap *a= "<<*a<<" *b = "<<*b<<endl;
}
int main()
{
	int a=10,b=20;
	cout<<"\n MAIN Before swap a= "<<a<<" b = "<<b<<endl;
	swap(&a,&b);
	cout<<"\n After swap a= "<<a<<" b = "<<b<<endl;
	return 0;
}
