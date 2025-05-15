#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
}

/*int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_putstr_fd(argv[1], ft_atoi(argv[2]));
	}
}*/