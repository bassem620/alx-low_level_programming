#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
   * main - print to screen
   *
   * Return: zero
   */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if(n>0) printf("is positive");
    else if (n>0) printf("is negative");
    else printf("is zero");
	return (0);
}