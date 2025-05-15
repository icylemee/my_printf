/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:17:47 by mlemee            #+#    #+#             */
/*   Updated: 2025/05/15 16:13:38 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	hex_len(unsigned int n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		n /= 16;
		len++;
	}
	return (len);
}

char	*ft_conv_hexa(unsigned int n, const char *set)
{
	int				i;
	char			*s1;
	int				len2;
	char			temp;
	int				len;

	len = hex_len(n);
	s1 = malloc(len + 1);
	i = 0;
	while (n > 0)
	{
		s1[i] = set[(n % 16)];
		n /= 16;
		i++;
	}
	s1[i] = '\0';
	i = 0;
	len--;
	len2 = len;
	while (i <= (len / 2))
	{
		temp = s1[i];
		s1[i] = s1[len2];
		s1[len2] = temp;
		i++;
		len2--;
	}
	return (s1);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%s\n", ft_conv_hexa(atoi(argv[1]), "0123456789abcdef"));
	}
}*/
