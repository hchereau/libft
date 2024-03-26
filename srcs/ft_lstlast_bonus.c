/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imback <imback@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:28:25 by imback            #+#    #+#             */
/*   Updated: 2024/03/26 12:36:37 by imback           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstlast;

	lstlast = lst;
	while (lst != NULL)
	{
		lstlast = lst;
		lst = lst->next;
	}
	return (lstlast);
}
