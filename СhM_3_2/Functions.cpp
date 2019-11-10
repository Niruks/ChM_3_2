#include "Functions.h"
#include <cmath>

double RK4System(double x, double vn1, double vn2, double h, int m)
{
	double vnplus1;
	double k1, k2, k3, k4;
	if (m == 1)
	{
		k1 = f1(vn2);
		k2 = f1(vn2 + (h / 4.0)*k1);
		k3 = f1(vn2 + (h / 2.0)*k2);
		k4 = f1(vn2 + h*(k1 - 2 * k2 + 2 * k3));
		vnplus1 = vn1 + (h / 6.0)*(k1 + 4 * k3 + k4);
	}
	else
	{
		k1 = f2(vn1, vn2);
		k2 = f2(vn1 + (h / 4.0)*k1, vn2 + (h / 4.0)*k1);
		k3 = f2(vn1 + (h / 2.0)*k2, vn2 + (h / 2.0)*k2);
		k4 = f2(vn1 + h*(k1 - 2 * k2 + 2 * k3), vn2 + h*(k1 - 2 * k2 + 2 * k3));
		vnplus1 = vn2 + (h / 6.0)*(k1 + 4 * k3 + k4);
	}

	return vnplus1;
}

double f1(double u2)
{
	return u2;
}

double f2(double u1, double u2)
{
	return -15 * u2 - 200 * u1 - 200 * pow(u1, 3);
}

double Vn1capSystem(double xn, double vn1, double vn2, double h, int m)
{
	double v1n12, v2n12, xn12, vn1cap;

	v1n12 = RK4System(xn, vn1, vn2, h / 2.0, 1);
	v2n12 = RK4System(xn, vn1, vn2, h / 2.0, 2);
	xn12 = xInc(xn, h / 2.0);
	vn1cap = RK4System(xn12, v1n12, v2n12, h / 2.0, m);

	return vn1cap;
}

double xInc(double x, double h)
{
	return x + h;
}

double PhP(double u1, double u2)
{
	return (-15 * u2 - 200 * u1 - 200 * pow(u1, 3)) / u2;
}

double CS(double _vn1cap, double _vn1)
{
	return (_vn1cap - _vn1) / 15.0;
}

int LPControlSystem(double S1, double S2, double Eps)
{
	double maxS;
	if (abs(S1) >= abs(S2))
	{
		maxS = abs(S1);
	}
	else
	{
		maxS = abs(S2);
	}
	if (maxS > Eps)
	{
		return -1;
	}
	else
	{
		if (maxS < Eps / 32.0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
double Correction(double vn1, double S)
{
	return vn1 + S * 16;
}

double RK4(double x, double vn, double h)
{
	double vnplus1, k1, k2, k3, k4;
	
		k1 = f1test(vn);
		k2 = f1test(vn + (h / 4.0)*k1);
		k3 = f1test(vn + (h / 2.0)*k2);
		k4 = f1test(vn + h*(k1 - 2 * k2 + 2 * k3));
	
	vnplus1 = vn + (h / 6.0)*(k1 + 4 * k3 + k4);

	return vnplus1;
}

double f1test(double u)
{
	return -u*1.5;
}

double f1Accurate(double u0, double x)
{
	return u0*exp(-x*1.5);
}

double Vn1cap(double xn, double vn, double h)
{
	double vn12, xn12, vn1cap;

	vn12 = RK4(xn, vn, h / 2.0);
	xn12 = xInc(xn, h / 2.0);
	vn1cap = RK4(xn12, vn12, h / 2.0);

	return vn1cap;
}

int LPControl(double S, double Eps)
{
	if (abs(S) > Eps)
	{
		return -1;
	}
	else
	{
		if (abs(S) < Eps / 32.0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}