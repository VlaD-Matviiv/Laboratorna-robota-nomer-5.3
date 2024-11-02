// Lab 5_3

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double s(const double x);
double A(const double x);
double B(const double x);
double F(double A, double B);

int main()
{
	double rp, rk, z;
	int n;

	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;

	double dr = (rk - rp) / n;
	double r = rp;

	while (r <= rk)
	{
		z = s(sqrt(r) + 1) - pow(s((sqrt(r) - 1) + 1), 2);
		cout << r << " " << z << endl;
		r += dr;
	}
	return 0;
}

double s(const double x)
{
	if (abs(x) >= 1)
		return ((1 + (x * x) + sqrt(abs(sin(x)))) / ((sin(x) * sin(x)) * (2 * (x * x) + 1)));
	else
		double F;
};

double A(const double x)
{
	double S = 0;
	int i = 0;
	double a = x / ((i - 2) * (i - 1) * i);
	S = a;
	return 0;
};

double B(const double x)
{
	double S = 0;
	int k = 1;
	double a = x / ((k - 2) * (k - 1) * k);
	S = a;
	return 0;
};

double F(double A, double B)
{
	(A + B);
	return 0;
};

