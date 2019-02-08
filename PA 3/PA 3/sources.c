#include "sources.h"

//reads Double from infile, returns double from infile
double readDouble(FILE *infile) {

	double number = 0.0;
	fscanf(infile, "%d", &number);
	return number;
}

//reads Integer from infile, returns integer from infile
int readInt(FILE *infile) {

	int number = 0.0;
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

	return number5;
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
	fscanf(outfile, "%d\n", number);
}