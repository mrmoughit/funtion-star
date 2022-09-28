#include<stdlib.h>
void ft_putchar(char c);
void print_stars(int n);
int main (int argc, char **argv)
{
	if (argc == 2)
		print_stars(atoi(argv[1]));
}


