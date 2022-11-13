/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:26:28 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/13 08:01:02 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}		
	return (dest);
}

/*int main()
{
	char src[] = "salut";
	char dest[10];
//	printf("%s \n",(char *)ft_memmove(src + 1, src, 2));
//	printf("%s \n", (char *)ft_memmove(dest, src, 3));
//	printf("%s \n",(char *)memmove(src + 1, src, 2));                         
//	printf("%s", (char *)memmove(dest, src, 3)); 
}
*/
