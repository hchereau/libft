#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL)
	{
		if (f != NULL)
			f(lst->content);
		ft_lstiter(lst->next, f);
	}
}
