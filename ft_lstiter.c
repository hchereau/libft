/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:30:31 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/21 16:46:15 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL)
	{
		if (f != NULL)
			f(lst->content);
	}
}
