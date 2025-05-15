/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:47:13 by mlemee            #+#    #+#             */
/*   Updated: 2025/05/06 15:55:13 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "libft_bonus.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	void	*content;

	while (lst)
	{
		content = lst -> content;
		f(content);
		lst = lst -> next;
	}
}
