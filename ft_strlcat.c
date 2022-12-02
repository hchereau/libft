/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:20:16 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/30 23:22:10 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t size_dst;

	size_dst = ft_strlen(dst);
	ft_memcpy(dst + size_dst, src, size); 
	return (size_dst + ft_strlen(src));
}

/*
strlcat
goal : concatenner src dans dst 
return len de dst +src
process:
	-> se rendre a la fin de dest
	-> copier src dans dest
	-> return ft_strlen(src + dst)
*/
