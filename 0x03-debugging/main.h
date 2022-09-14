#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	return (i);
}
void positive_or_negative(int i);
int largest_number(int a, int b, int c);
void print_remaining_days(int month, int day, int year);
int convert_days(int month, int day);

#endif /* MAIN_H */
