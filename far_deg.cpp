//This Program is made by Abhinav Kumar.
#include<iostream>
using namespace std;

// class that converts fahrenheit into degrees
class TEMP
{
	float f,c;
	public:
		float getdata();
		void display(void);

};

float TEMP :: getdata()
{
	cout<<"Enter the Fahrenheit value to convert it into degrees";
	cin>>f ;
	
	c = (5*(f - 32))/9;
	return(c);
}

void TEMP :: display(void)
{
	float v;
	v = getdata();
	cout<<"Celsius degree = "<<v;
}
main()
{
	TEMP c;
	c.display();

}


