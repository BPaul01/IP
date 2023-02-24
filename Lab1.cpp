// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h";

int main()
{
	Electric e1("BMW", "roz", 300, "Paul", 27.76);
	e1.add_pass("Pas1");
	e1.add_pass("Pas2");
	Electric e2("VW", "negru", 250, "Andrei", 30.34);
	e2.add_pass("Pas2");
	e2.add_pass("Pas2");

	Internal i1("Ferarri", "rosu", 321, "Ana", 34.21);
	i1.add_pass("Pas2");
	i1.add_pass("Pas2");
	Internal i2("Renault", "alb", 300, "Alina", 28.21);
	i2.add_pass("Pas2");
	i2.add_pass("Pas2");

	printf("Masina e1:\n");
	e1.print_pass();
	printf("Soferul: %s\n", e1.get_driver());
	printf("Model: %s\n", e1.get_model());
	printf("Culoare: %s\n", e1.get_color());

	printf("Masina e2:\n");
	e1.print_pass();
	printf("Soferul: %s\n", e2.get_driver());
	printf("Model: %s\n", e2.get_model());
	printf("Culoare: %s\n", e2.get_color());

	printf("Masina i1:\n");
	i1.print_pass();
	printf("Soferul: %s\n", i1.get_driver());
	printf("Model: %s\n", i1.get_model());
	printf("Culoare: %s\n", i1.get_color());

	printf("Masina i2:\n");
	i2.print_pass();
	printf("Soferul: %s\n", i2.get_driver());
	printf("Model: %s\n", i2.get_model());
	printf("Culoare: %s\n", i2.get_color());

	



}
