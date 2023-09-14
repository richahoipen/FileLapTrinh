#include <iostream>
#include <math.h>
using namespace std;
void giaiPhuongTrinhBacHai(float a,float b,float c);
void giaiPhuongTrinhBacNhat(float b,float c);
int main()
{
    float a,b,c;
    cout<<"Nhap a:";
    cin>>a;
    cout<<"Nhap b:";
    cin>>b;
    cout<<"Nhap c:";
    cin>>c;
    if(a==0 && b==0 && c==0)
    {
        cout<<"Phuong trinh vo so nghiem."<<endl;
    }
    if(a==0 && b!=0 && c!=0)
    {
        giaiPhuongTrinhBacNhat(b,c);
    }
    if(a==0 && b==0 && c!=0)
    {
        cout<<"Phuong trinh vo nghiem."<<endl;
    }
    if(a!=0 && b!=0 && c!=0)
    {
        giaiPhuongTrinhBacHai(a,b,c);
    }

    return 0;
}
void giaiPhuongTrinhBacNhat(float b,float c)
{
    float x=-c/b;
    cout<<"Phuong trinh se la phuong trinh bac 1 co nghiem x="<<x<<endl;
}
void giaiPhuongTrinhBacHai(float a,float b,float c)
{
    float delta=b*b-4*a*c;
    float x,x1,x2;
    if(delta==0)
    {
        x=-b/(2*a);
        cout<<"Phuong trinh co nghiem kep x="<<x<<endl;
    }
    if(delta>0)
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        cout<<"Phuong trinh co 2 nghiem phan biet x1="<<x1<<", x2="<<x2<<endl;
    }
    if(delta<0)
    {
        cout<<"Phuong trinh vo nghiem."<<endl;
    }
}
