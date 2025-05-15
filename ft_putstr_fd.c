/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:19:04 by mlemee            #+#    #+#             */
/*   Updated: 2025/05/15 16:13:16 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || s[i] == '\0')
		return (0);
	while (s[i])
		write(fd, &s[i++], 1);
	return (i - 1);
}

/*int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_putstr_fd(argv[1], ft_atoi(argv[2]));
	}
}*/