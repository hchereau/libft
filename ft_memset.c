wwwwww*********************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:31:54 by hchereau          #+#    #+#             */
/*   Updated: 2022/11/09 13:46:28 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int    main()
{
    char str[] = "whatttttttttttt";

    printf("%s\n", (char *)ft_memset(str,'f', 2));
	printf("%s", (char *)memset(str,'f', 2));
} 
*/
