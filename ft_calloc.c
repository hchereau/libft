#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	size_t	size_total = nmemb * size;
	void	*ptr;

	ptr = NULL;
	if (size_total == 0 || nmemb <= SIZE_MAX / size)
		ptr = malloc(total_size);
	if (ptr != NULL)
		ft_bzero(ptr, total_size);
	return (ptr);
}
