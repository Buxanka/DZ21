#include <iostream>
using namespace std;

double func(double* px, double* py, double res = 0) {
	res = (*px + *py) / 2;
	return res;
}




int main(void) {
	setlocale(LC_ALL, "Russian");
	
	double x, y;
	cout << "������� ��� �����: ";
	cin >> x >> y;

	double* px = &x;
	double* py = &y;

	cout << "������� ��������������: " << func(&x, &y) << endl;



	return 0;
}

