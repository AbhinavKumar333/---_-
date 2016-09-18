#include<iostream>
using namespace std;

int main()
{
	int num,n1,n2,n3,n4,sum;
	
	cout<<"Enter a number to check for Armstrong";
	cin>>num;
		
		n1 = num%10;
		n2 = num/10;
		n3 = n2%10;
		n4 = n2/10;
	sum = n1*n1*n1 + n3*n3*n3 + n4*n4*n4;
	if(sum == num)
	{ cout<<"The number"<<num<<"is an Armstrong number";}
	else
	{cout<<"The number"<<num<<" is not an Armstrong number";}
}


