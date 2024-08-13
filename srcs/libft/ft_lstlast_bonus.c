/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:28:25 by imback            #+#    #+#             */
/*   Updated: 2024/05/20 10:02:08 by hucherea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
	{
		return (lst);
	}
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}



// t_list	*ft_lstlast(t_list *lst)
// {
// 	t_list	*lstlast;

// 	lstlast = lst;
// 	while (lst != NULL)
// 	{
// 		lstlast = lst;
// 		lst = lst->next;
// 	}
// 	return (lstlast);
// }


