#include <iostream>
<<<<<<< HEAD
//ninhcute
=======
//hehe
>>>>>>> eaa00e41f1531f3af449623e7489fdb0197265c2
using namespace std;
/*int cong(int a, int b);//SV A
int tru(int a, int b);//SV B
int nhan(int a, int b);//SV C
int chia(int a, int b);//SV D*/
int main()
/*{
	int a, b;
	cout << "CHUONG TRINH TINH TOAN CO BAN" << endl;
	//Cac ban code tai day

	cout << endl;
	system("pause");
	return 0;
}*/
{
    int a;
    int b;
    double nghiem;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    if(a == 0) {
        if (b == 0) {
            cout << "Phuong trinh vo so nghiem" << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    } else {
        nghiem = (double)-b/a;
        cout << "Phuong trinh co nghiem la: " << nghiem << endl;
    }
    return 0;
}