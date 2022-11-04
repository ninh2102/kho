#include <iostream>
// <<<<<<< HEAD
// //ninhcute
// =======
// //hehe
// >>>>>>> eaa00e41f1531f3af449623e7489fdb0197265c2
// using namespace std;
// int cong(int a, int b);//SV A
// int tru(int a, int b);//SV B
// int nhan(int a, int b);//SV C
// int chia(int a, int b);//SV D
bool KTSHT (int n)
{
	int s=0;
	for(int i =1;i<n/2;i++)
	{
		if(n%i==0);
		s+=i;
	}
	if( s==n)
		return true;
	return false;
}
int main()
{
	// int a, b;
	// cout << "CHUONG TRINH TINH TOAN CO BAN" << endl;
	// //Cac ban code tai day

	// cout << endl;
	int n;
	cout<<"\nNhap n:";
	cin>>n;
	if(KTSHT(n))
		cout<<n<<"la so hoan thien";
	else
		cout<<n<<"ko la so hoan thien";
	return 0;
}