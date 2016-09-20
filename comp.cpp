#include<iostream>
using namespace std;

class comp
{
    public:
	int real,img;


    int set()
    {
        cout<<"Enter the real part and imaginary part for the complex number";
        cin>>real>>img;
    }

	void display()
	{
		cout<<real<<" + i"<<img<<endl;
	}
};

comp add(int,comp);
comp add(comp,comp);

int main()
{	comp c1,c2,c3,c4;

	c1.set();
	c2.set();

	c1.display();
	c2.display();

	c3 = add(10,c1);
	cout<<"c3 = add(10,c1) : ";
	c3.display();

	c4 = add(c1,c2);
	cout<<"c4 = add(c1,c2) : ";
	c4.display();

	return 0;
}


comp add(int a,comp o1)
{   comp o3;
    o3.real = a + o1.real;
    o3.img = o1.img;
	return (o3);
}

comp add(comp o1,comp o2)
{   comp o3;
    o3.real =o1.real + o2.real;
    o3.img = o1.img + o2.img;
	return (o3);
}



