#include<bits/stdc++.h>

using namespace std;
int main()
{
	float nhietdo;
	cout << "nhap nhiet do:";
	cin >> nhietdo;
	if(nhietdo < 0)
	cout << "Freezing weather ";
	else if(nhietdo >= 0 && nhietdo <= 10)
	cout << "Very Cold weather";
	else if(nhietdo > 10 && nhietdo < 20)
	cout << "Cold weather";
	else if(nhietdo >= 20 && nhietdo <= 30)
	cout << "Normal in temp";
	else if(nhietdo > 30 && nhietdo < 40)
	cout << "Its Hot";
	else cout << "Its Very hot";
	return 0;
	/*
	float, double: số thực
	int: số nguyên
	bool/boolean nếu là Java là lí luận đúng sai
	int mà trả về 1 và 0 cũng là bool
	char: kí tự, phải đóng dấu ''. Ví dụ 'A'
	string: chuỗi, phảu đóng dấu "". Ví dụ "Nguyen Van A"
	*/
}
