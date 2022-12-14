/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:51:45 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/16 15:29:47 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*new;
	
	new = (t_list *) malloc(sizeof(t_list));
	if (new == NULL)
		return NULL;
	new->content = content;
	new->next = NULL;
	return new;
}

/*
int main()
{
	char content[] = "salut";
	t_list *new = ft_lstnew(content);
	printf("%s", (char *)new->content);
}*/
