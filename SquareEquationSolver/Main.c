#include "Header.h"

extern void User_Interface(Equation const* OurEquation);

int main(int argc, char* argv)
{
	Equation OurEquation;

	User_Interface(&OurEquation);


	return 0;
}