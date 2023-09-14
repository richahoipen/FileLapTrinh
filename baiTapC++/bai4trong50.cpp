#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	float tung1,hoanh1,tung2,hoanh2;
	cout<<"Nhap toa do tung canh: ";
	cin >> tung1 >> hoanh1 >> tung2 >> hoanh2;
    float dodai = sqrt((tung1 - tung2)*(tung1 - tung2) + (hoanh1 -hoanh2)*(hoanh1 - hoanh2));
    cout << "do dai canh tao boi 2 diem :" << dodai<<endl;
    return 0;
}
