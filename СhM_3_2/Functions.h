#pragma once
double RK4System(double x, double vn1, double vn2, double h, int m);
double f1(double u2);
double f2(double u1, double u2);
double Vn1capSystem(double xn, double vn1, double vn2, double h, int m);
double xInc(double x, double h);
double PhP(double u1, double u2);
double CS(double _vn1cap, double _vn1);
int LPControlSystem(double S1, double S2, double Eps);
double Correction(double vn1, double S);