/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_majuscules.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:18:00 by mlemee            #+#    #+#             */
/*   Updated: 2025/05/15 15:18:35 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_majuscules(char *s)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s1 == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s1[i] = s[i] - 32;
		else
			s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
