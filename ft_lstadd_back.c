#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*addnode;

	addnode = *lst;
	if (*lst == NULL)
		*lst = new;
	if (lst != NULL && addnode != NULL)
	{
		while (addnode->next)
			addnode = addnode->next;
	}
	if (addnode != NULL && new != NULL)
		addnode->next = new;
}
