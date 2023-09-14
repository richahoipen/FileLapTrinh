//nhap a b c giai phuong trinh bac 2
//delta=b*b-4*a*c
//delta<0 output vo nghiem
//delta=0 output -b/2*a
//delta>0 output (-b+sqrt(delta))/2*a and (-b-sqrt(delta))/2*a
//a != 0, b = 0, c!= 0 thi delta != 0 => delta <0, delta >0 ok

#include <bits/stdc++.h>
using namespace std;

double a, b, c;

void input()
{
	cin >> a >> b >> c;
}

void solve()
{
	double delta;
	if(a == 0) {
		if(b == 0) cout << "infinite solution";
		else cout << -c/b;
	}
	else {
		delta = b*b - 4*a*c;
		if(delta < 0) {
			cout << "no solution";
		}
		else if(delta == 0) {
			cout << -b/(2*a) << endl;
		}
		else {
			cout << (-b + sqrt(delta)) / (2*a) << " " << (-b - sqrt(delta)) / (2*a) << endl; 
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	input();
	solve();
}