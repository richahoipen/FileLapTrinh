#include <iostream>
using namespace std;
//(2n-1)/2n
float tinhTich(int n);
float tinhTichDeQuy(int n);
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(n<=0)
    {
        cout<<"n must be >0"<<endl;
    }
    else
    {
        cout<<"Result is: "<<tinhTich(n)<<endl;
    }

    return 0;
}
float tinhTich(int n)
{
    float tich=1;
    //nhân dồn 1 cộng dồn là 0
    for(int i=1;i<=n;i++)
    {
        tich*=(2*i-1)/(2*i);
    }
    return tich;
}
float tinhTichDeQuy(int n)
{
    if(n==1)
        return 1/2;
    return tinhTichDeQuy(n-1)*((2*n-1)/2*n);
}
