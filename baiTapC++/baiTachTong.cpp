#include <iostream>
using namespace std;

void inputArray(int a[],int &n);
void outputArray(int a[],int n);
int sumArray(int a[],int n);
int checkArray(int a[],int n);
int main()
{
    int a[20];
    int n;
    inputArray(a,n);
    outputArray(a,n);
    cout<<"Sum array is:"<<sumArray(a,n)<<endl;
    if(checkArray(a,n))
    {
        cout<<"Array can cut to same sum"<<endl;
    }
    else
    {
        cout<<"Array can not cut to same sum"<<endl;
    }
    return 0;
}
void inputArray(int a[],int &n)
{
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void outputArray(int a[],int n)
{
    cout<<"List Array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
}
int sumArray(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int checkArray(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=a[i];
        if(sum*2==sumArray(a,n))
            return 1;
    }
    return 0;
}
