Square Equation prog

Problem : We need to solve the equation

Requirements : The equation looks like this : ax^2 + bx + c = 0. It is given with 3 parameters a,b,c which are Real. We need to get all the roots of the equation. The i/o entity is console. We have only one equation.

Architecture :
* Overview: struct Equation stores parameters. UI is implemented as the function User_Interface. Function GetParameters gets the parameters into the struct.
* Function GetSolution finds the values of the roots and gives it to the struct Solution. struct Solution stores enum and roots. Function ShowSolution prints the solutions to the console.

* Take into account : We get parameters as DOUBLE, not as any other data type. We show different quantity of solutions depending on the struct Solution enum state.
