#include<iostream>

#include<string.h>


using namespace std;

class BANK
{
	char name[30],type[30];
	long acc;
	float bal;
	public:
		void get(int no,char *n,char *t,float b)
		{
			strcpy(name,n);
			acc = no;
			strcpy(type,t);
			bal = b;
		}
		float deposit()
		{
			float amt;
			cout<<"\nEnter amount:";
			cin>>amt;
			bal = bal + amt;
			return (bal);
		}
		float withdraw()
		{
			float amt;
			cout<<"\nMoney to be Withdrawed";
			cin>>amt;
			bal = bal - amt;
			return (bal);
		}
		void display(void)
		{
			cout<<"\n\nAccount number"<<acc;
			cout<<"\n\nName:"<<name;
			cout<<"\n\nAccount Type"<<type;
			cout<<"\n\nDeposit Amount:"<<deposit();
			cout<<"\n\nBalance left after withdrawal"<<withdraw();
		}

};

main()
{
	int n;
	char num[20],t[20];
	float a;
	BANK bk[10];
      for(int i=0;i<10;i++)
      {	cout<<"Account Holder No.: "<<i+1;
	cout<<"\nEnter Account Number:";
	cin>>n;
	cout<<"\nEnter Name:";
	cin>>num;
	cout<<"\nEnter Account Type:";
	cin>>t;
	cout<<"\nEnter Balance Amount:";
	cin>>a;
	bk[i].get(n,num,t,a);
	bk[i].display();
	cout<<"-------"<<endl;
      }
}

