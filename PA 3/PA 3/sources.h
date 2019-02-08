#pragma once
#include <stdio.h>
#include <math.h>

//method prototypes
double readDouble(FILE *infile);
int readInt(FILE *infile);
double calculateSum(double number1, double number2, double number3, double number4, double number5);
double calculateMean(double value1, int value2);
double calculateDevation(double number, double mean);
double calculateVariance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number);
double calculateStandardDeviation(double variance);
double findMax(double number1, double number2, double number3, double number4, double number5);
double findMin(double number1, double number2, double number3, double number4, double number5);
void printDouble(FILE *outfile, double number);