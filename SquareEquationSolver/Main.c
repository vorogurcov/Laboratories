#include "Header.h"

extern void User_Interface(Equation const* OurEquation);
extern void GetSolution(Equation const* OurEquation, Solution* const OurSolution);
extern void ShowSolution(Solution const* OurSolution);

int main(int argc, char* argv)
{
	Equation OurEquation;
	Solution OurSolution;

	User_Interface(&OurEquation);
	GetSolution(&OurEquation, &OurSolution);
	ShowSolution(&OurSolution);

	return 0;
}