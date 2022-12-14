/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:32:48 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/21 12:07:11 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if ( lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main()
{
	char	content[] = "salut";
	
}
*/
