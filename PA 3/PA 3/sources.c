#include "sources.h"

//reads Double from infile, returns double from infile
double readDouble(FILE *infile) {

	double number = 0.0;
	fscanf(infile, "%lf", &number);
	return number;
}

//reads Integer from infile, returns integer from infile
int readInt(FILE *infile) {

	int number = 0;
	fscanf(infile, "%d", &number);
	return number;
}

//calculates sum of 5 numbers, returns sum of 5 numbers
double calculateSum(double number1, double number2, double number3, double number4, double number5) {
	double sum = 0;

	sum = number1 + number2 + number3 + number4 + number5;
	return sum;
}

//calculates mean, returns mean
double calculateMean(double value1, int value2) {
	double mean = 0.0;

	mean = value1 / value2;
	return mean;
}

//calculates deviation, returns devation
double calculateDevation(double number, double mean) {
	double devation = 0.0;

	devation = number - mean;
	return devation;
}

//calculates variance, returns variance of 5 values
double calculateVariance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number) {
	double variance = 0.0;

	variance = (pow(deviation1, 2) + pow(deviation2, 2) + pow(deviation3, 2) + pow(deviation4, 2) + pow(deviation5, 2)) / number;
	return variance;
}

//calculates standard deviation, returns standard deviation
double calculateStandardDeviation(double variance) {
	double standardDeviation = 0.0;

	standardDeviation = sqrt(variance);
	return standardDeviation;
}

//finds the highest number, returns highest number
double findMax(double number1, double number2, double number3, double number4, double number5) {
	double max = 0.0;
	
	max = number1;
	if (max < number2) {
		max = number2;
	}
	
	if (max < number3) {
		max = number3;
	}
		
	if (max < number4) {
		max = number4;
	}
			
	if (max < number5) {
		max = number5;
	}

	return max;
}

//finds minimum value, returns minimum value
double findMin(double number1, double number2, double number3, double number4, double number5) {
	double min = 0.0;

	min = number1;
	if (min > number2) {
		min = number2;
	}

	if (min > number3) {
		min = number3;
	}

	if (min > number4) {
		min = number4;
	}

	if (min > number5) {
		min = number5;
	}

	return min;
}

//writes number to outfile
void printDouble(FILE *outfile, double number) {
	fprintf(outfile, "%.2lf\n", number);
}

//prints a blank line
void printSpace(FILE *outfile) {
	fprintf(outfile, "\n");
}

//calculates max and min and then prints the file to the outfile
void calcMinMaxPrint(FILE *outfile, double value1, double value2, double value3, double value4, double value5) {
	double min = 0.0, max = 0.0;

	min = findMin(value1, value2, value3, value4, value5);
	max = findMax(value1, value2, value3, value4, value5);
	printDouble(outfile, min);
	printDouble(outfile, max);
}

//calculates standard deviation and prints to the outfile
void calcStaDevPrint(FILE *outfile, double value1, double value2, double value3, double value4, double value5, double mean) {
	double deviation1 = 0.0, deviation2 = 0.0, deviation3 = 0.0, deviation4 = 0.0, deviation5 = 0.0;

	deviation1 = calculateDevation(value1, mean);
	deviation2 = calculateDevation(value2, mean);
	deviation3 = calculateDevation(value3, mean);
	deviation4 = calculateDevation(value4, mean);
	deviation5 = calculateDevation(value5, mean);

	double variance = 0.0, standardDeviation = 0.0;
	variance = calculateVariance(deviation1, deviation2, deviation3, deviation4, deviation5, 5);
	standardDeviation = calculateStandardDeviation(variance);

	printDouble(outfile, standardDeviation);
}

//calculates mean of 5 values and prints it
double calcMeanPrint(FILE *outfile, double value1, double value2, double value3, double value4, double value5) {
	double sum = 0.0, mean = 0.0;
	sum = calculateSum(value1, value2, value3, value4, value5);
	mean = calculateMean(sum, 5);

	printDouble(outfile, mean);
	return mean;
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