#include "libft.h"

void	ft_putnbr_unsigned(unsigned int num)
{
	unsigned int	div;

	div = 1;
	while (num / div > 9)
		div *= 10;
	while (div >= 1)
	{
		ft_putchar_fd((num / div) + '0', 1);
		num %= div;
		div /= 10;
	}
}
/*#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putnbr_unsigned(atoi(argv[1]));
	}
}*/