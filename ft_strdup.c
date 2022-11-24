/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 07:14:18 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/24 22:45:42 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*tab;

	size = ft_strlen(s) + 1;
	tab = (char *)malloc(size * sizeof(char));
	if (tab != NULL)
		ft_strlcpy(tab, s, size);
	return (tab);
}
