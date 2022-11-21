/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsadd_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:46:14 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/21 14:40:56 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *curr;

	if (lst != NULL)
	{
		if (*lst != NULL)
		{
			curr = *lst;
			while (curr->next != NULL)
				curr = curr->next;
			curr->next = new;
		}
		else
			*list = new;
	}
}
