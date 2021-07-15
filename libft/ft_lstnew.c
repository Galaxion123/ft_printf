#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = (t_list *) malloc(sizeof(*tmp));
	if (tmp == 0)
		return (0);
	tmp->content = content;
	tmp->next = 0;
	return (tmp);
}
