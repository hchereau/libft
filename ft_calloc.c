/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 06:52:57 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/13 07:12:11 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*calloc(size_t nmemb, size_t size);
{
	void	*tab;

	if (nmemb == 0 || size == 0)
		tab = NULL;
	else
	{
		tab = malloc(nmemb * size);
		ft_bero(tab, (nmemb * size));
	}
	return (tab);
}
