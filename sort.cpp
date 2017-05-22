#include<iostream>
using namespace std;

template <class w>
class quick
{
    w a[50];
    int n;
    public:
        void get();
        void sort(int,int);
        int partition(int,int);
        void put();
};
template <class w>
void quick <w>::get()
{
    cout<<"Enter the number of the terms\n";
    cin>>n;
    cout<<"Enter the values\n";
    for(int i=1;i<=n;i++)
        cin>>a[i];
        sort(1,n);
}
template <class w>
void quick <w>::sort(int p,int q)
{
    int j;
    if(p<q)
{
    j=partition(p,q+1);
    sort(p,j-1);
    sort(j+1,q);
}
}
template <class w>
int quick <w>::partition(int m,int p)
{
    int i,j,t;
    w v;
    v=a[m];
    i=m;j=p;
    do
    {
    do
    i++;
    while(a[i]<v);
    do{
    j--;}
    while(a[j]>v);
    if(i<j)
    {
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    }
    }while(i<j);
    a[m]=a[j];
    a[j]=v;
    return j;
}
template <class w>
void quick<w>::put()
{
    int i;
    for(i=1;i<=n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    quick<int>q1;
    quick<float>q2;
    q1.get();
    cout<<"\n\n Sorted array of integer values:-\n";
    q1.put();
    q2.get();
    cout<<"\n\n Sorted array of floating values:-\n";
    q2.put();
}
