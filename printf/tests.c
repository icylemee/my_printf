#include <stdio.h>
#include <stdlib.h>

unsigned int	test(int t)
{
	unsigned int	i;

	i = t;
	return (t);
}
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%x\n", test(atoi(argv[1])));
		printf("%X\n", test(atoi(argv[1])));
		printf("%d\n", test(atoi(argv[1])));
		printf("%i\n", test(atoi(argv[1])));
	}
}