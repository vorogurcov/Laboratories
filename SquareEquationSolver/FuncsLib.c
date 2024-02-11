#include "Header.h"

static void GetParameters(Equation* const OurEquation, double const par1, double const par2, double const par3)
{
	OurEquation->a = par1;
	OurEquation->b = par2;
	OurEquation->c = par3;
}

void User_Interface(Equation const* OurEquation)
{
	double a, b, c;
	printf("Please, type in 3 double parameters of your equation.\n");
	//Check if double
	scanf("%lf %lf %lf", &a, &b, &c);
	GetParameters(OurEquation, a, b, c);
}

