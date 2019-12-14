#include "Functions.h"
#include <cmath>

double* RK4System(double x, double *vn, double h)
{
	double *vnplus1;
	double k1, k2, k3, k4, q1, q2, q3, q4;

	vnplus1 = new double[2];
	
		k1 = f1(vn[1]);
		k2 = f1(vn[1] + (h / 4.0)*k1);
		k3 = f1(vn[1] + (h / 2.0)*k2);
		k4 = f1(vn[1] + h*(k1 - 2 * k2 + 2 * k3));

		q1 = f2(vn[0], vn[1]);
		q2 = f2(vn[0] + (h / 4.0)*q1, vn[1] + (h / 4.0)*q1);
		q3 = f2(vn[0] + (h / 2.0)*q2, vn[1] + (h / 2.0)*q2);
		q4 = f2(vn[0] + h*(q1 - 2 * q2 + 2 * q3), vn[1] + h*(q1 - 2 * q2 + 2 * q3));


		vnplus1[0] = vn[0] + (h / 6.0)*(k1 + 4 * k3 + k4);
		vnplus1[1] = vn[1] + (h / 6.0)*(q1 + 4 * q3 + q4);	

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

double* Vn1capSystem(double xn, double *vn, double h)
{
	double *vn12, *vn1cap;
	double xn12;

	vn12 = new double[2];
	vn1cap = new double[2];

	vn12 = RK4System(xn, vn, h / 2.0);	
	xn12 = xInc(xn, h / 2.0);
	vn1cap = RK4System(xn12, vn12, h / 2.0);

	return vn1cap;
}

double xInc(double x, double h)
{
	return x + h;
}


double* CS(double *_vncap, double *_vnplus1)
{
	double *S;
	S = new double[2];

	S[0]= (_vncap[0] - _vnplus1[0]) / 15.0;
	S[1]= (_vncap[1] - _vnplus1[1]) / 15.0;

	return S;
}

int LPControlSystem(double *_S, double Eps)
{
	double maxS;
	if (abs(_S[0]) >= abs(_S[1]))
	{
		maxS = abs(_S[0]);
	}
	else
	{
		maxS = abs(_S[1]);
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

double CS1(double _vcap, double _vplus1)
{
	return (_vcap - _vplus1) / 15.0;
}