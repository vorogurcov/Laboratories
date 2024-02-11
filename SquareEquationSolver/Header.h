#pragma once
#pragma warning(disable:4996)
#include <stdio.h>


struct Equation
{
	double a, b, c;
} typedef Equation;

struct Solution
{
	enum Status
		NoSol, OneSol, TwoSol;
	double* x1,* x2;
} typedef Solution;