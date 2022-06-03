#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lastnode;

	lastnode = lst;
	if (lastnode == NULL)
		return (NULL);
	while (lastnode->next)
		lastnode = lastnode->next;
	return (lastnode);
}
