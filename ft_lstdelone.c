/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:46:57 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/21 15:29:05 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{	
		if (lst != NULL)
		{
			if (del != NULL)
				del(lst->content);
			free(lst);
		}
}
