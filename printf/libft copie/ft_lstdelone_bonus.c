/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:47:06 by mlemee            #+#    #+#             */
/*   Updated: 2025/05/06 15:55:09 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "libft_bonus.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	void	*sup;

	sup = lst -> content;
	del(sup);
	free(lst);
}
