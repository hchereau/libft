/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:05:11 by imback            #+#    #+#             */
/*   Updated: 2024/03/26 14:25:18 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	const t_list	*last_node = ft_lstlast(lst);

	if (lst != NULL && new != NULL && last_node != NULL)
	{
		if (*lst != NULL)
		{
			last_node->next = new;
		}
		else
		{
			*lst = new;
		}
	}
}
