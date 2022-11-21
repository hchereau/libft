/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsclear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:32:53 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/21 16:22:45 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		if (del != NULL)
		{
			ft_lstclear(&(lst->next),del);
			ft_lstdone(lst, del);
			*lst = NULL;
		}
	}
}
