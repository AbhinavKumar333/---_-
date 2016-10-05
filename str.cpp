#include<iostream>
#include<string>
using namespace std;

class String
{
    public:
	string str;
	
	String()
	{
		str = " ";
	}
	
	String(string a)
	{
		str = a;
	}
		
	String(String &o1,String &o2)
	{
		str = o1.str + o2.str;
	}

	void display()
	{
		cout<<str;
	}
};

int main()
{	
	String s1;
	
	String s2("Good ");
	
	String s3("Luck");	

	String s4(s2,s3);
	
	cout<<"Uninitialized String--\t";
	s1.display();

	cout<<"\nString constant--\t";
	s2.display();
	
	cout<<"\nString constant--\t";
	s3.display();

	cout<<"\nConcatenate--\t";
	s4.display();
}

