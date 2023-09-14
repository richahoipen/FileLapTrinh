#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	float a , b , c;
	cout << "nhap a";
	cin >> a;
	cout << "nhap b";
	cin >> b;
	cout << "nhap c";
	cin >> c;
	if(a == 0)
	{
		if(b==0)
		{
			if(c == 0)
			cout <<"phuong trinh co vo so nghiem ";
			else
			cout <<"phuong trinh vo nghiem";
			
		}
		else 
		cout <<  - c / b;
	}
	else
	    {
		float denta = b*b - 4*a*c;
		if(denta < 0)
		cout <<"phuong trinh vo nghiem";
		else if(denta == 0)
		cout <<  -b / a;
		else
		cout << "phuong trinh co hai nghiem (-b + sqrt(denta))/a va(-b - sqrt(denta))/a ";
		}
		return 0;
}
