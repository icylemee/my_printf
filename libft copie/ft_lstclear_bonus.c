/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:46:52 by mlemee            #+#    #+#             */
/*   Updated: 2025/05/06 15:55:07 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	void	*sup;
	t_list	*add;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		sup = (*lst)-> content;
		del(sup);
		add = (*lst)-> next;
		free(*lst);
		*lst = add;
	}
}
