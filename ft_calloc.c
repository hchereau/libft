/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 06:52:57 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/24 22:35:07 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	sizetotal;

	sizetotal = nmemb * size;
	tab = NULL;
	if (sizetotal == 0 || nmemb <= SIZE_MAX / size)
		tab = malloc(sizetotal);
	if (tab != NULL)
		ft_bzero(tab, (sizetotal));
	return (tab);
}
