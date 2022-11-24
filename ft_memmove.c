/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:26:28 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/24 14:45:37 by hchereau         ###   ########.fr       */
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
			((uint8_t *)dest)[n - 1] = ((const uint8_t *)src)[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((uint8_t *)dest)[i] = ((uint8_t *)src)[i];
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
