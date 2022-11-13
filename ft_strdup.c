/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 07:14:18 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/13 08:10:19 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	size_t	size;
	char	*tab;

	size = ft_strlen(s);
	tab = (char *)malloc(size);
	if (tab != NULL)
		ft_strlcpy(tab, s, size);
	return (tab);
}
