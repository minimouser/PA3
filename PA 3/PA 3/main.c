/*
	Name: Bailey Wolber
	Email: bailey.wolber@wsu.edu
	Date: 2/6/2019
	Description: Reads data from input.dat, calculates GPA and writes GPA to output.dat
*/

#include "sources.h"

double readGPA(FILE *infile);
double readAge(FILE *infile);

int main(void) {
	//creates gpa and age variables
	double gpa1 = 0.0, gpa2 = 0.0, gpa3 = 0.0, gpa4 = 0.0, gpa5 = 0.0;
	double age1 = 0.0, age2 = 0.0, age3 = 0.0, age4 = 0.0, age5 = 0.0;
	int stnd1 = 0, stnd2 = 0, stnd3 = 0, stnd4 = 0, stnd5 = 0;

	FILE* infile = NULL;
	FILE* outfile = NULL;
	infile = fopen("input.dat", "r");
	outfile = fopen("output.dat", "w");

	//reads all the gpa and age info from the input.dat file
	gpa1 = readGPA(infile);
	stnd1 = readInt(infile);
	age1 = readAge(infile);

	gpa2 = readGPA(infile);
	stnd2 = readInt(infile);
	age2 = readAge(infile);

	gpa3 = readGPA(infile);
	stnd3 = readInt(infile);
	age3 = readAge(infile);

	gpa4 = readGPA(infile);
	stnd4 = readInt(infile);
	age4 = readAge(infile);

	gpa5 = readGPA(infile);
	stnd5 = readInt(infile);
	age5 = readAge(infile);


	fclose(infile);
	fclose(outfile);
	return 0; //indicates success
}

//reads GPA from file, returns GPA
double readGPA(FILE *infile) {
	readInt(infile);
	return readDouble(infile);
}

//reads the age from file 
double readAge(FILE *infile) {
	return readDouble(infile);
	readInt(infile);
}