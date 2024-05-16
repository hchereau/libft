/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:05:11 by imback            #+#    #+#             */
/*   Updated: 2024/05/16 14:37:51 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			curr = ft_lstlast(*lst);
			curr->next = new;
		}
		else
		{
			*lst = new;
		}
	}
}
