#pragma once
double* RK4System(double x, double *vn, double h);
double f1(double u2);
double f2(double u1, double u2);
double* Vn1capSystem(double xn, double *vn, double h);
double xInc(double x, double h);
double* CS(double *_vncap, double *_vnplus1);
int LPControlSystem(double *_S, double Eps);
double Correction(double vn1, double S);
double RK4(double x, double vn, double h);
double f1test(double u);
double f1Accurate(double u0, double x);
double Vn1cap(double xn, double vn, double h);
int LPControl(double S, double Eps);
double CS1(double _vcap, double _vplus1);