#include <iostream>
using namespace std;
int main()
{
    int soDia;
    do
    {
        cout<<"So dia: ";
        cin>>soDia;
        if(soDia<0)
        {
            cout<<"So dia am, vui long nhap lai.!!!!"<<endl;
        }
    }while(soDia<0);
    cout<<"Nhap so dia thanh cong.!!!!"<<endl;
    float soTien = soDia * 5000;
    if(soDia >= 10)
    {
        soTien=soTien-soTien*0.1;
        cout << "so tien phai tra :" << soTien << "VND"<<endl;
    }
    else
    {
        cout << "so tien phai tra :" << soTien << "VND"<<endl;
    }
    return 0;
}
/*
int main()
{
    int sodia;
    cout<<"So dia can mua: ";
    cin >> sodia;
    //số đĩa phải như thế nào
    if(sodia<0)
    {
        cout<<"So dia phai ko duoc am.!!!"<<endl;
        //Kết thúc chương trình
    }
    else
    {
        float sotien = sodia * 5000;
        if(sodia >= 10)
        {
            sotien=sotien-sotien*0.1;
            cout << "so tien phai tra :" << sotien << "VND"<<endl;
        }
    }
    return 0;
}*/
