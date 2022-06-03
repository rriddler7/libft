#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*templist;

	if (lst == NULL)
		return (NULL);
	newlist = ft_lstnew((*f)(lst->content));
	templist = newlist;
	while (lst->next != NULL && newlist != NULL)
	{
		templist->next = ft_lstnew((*f)(lst->next->content));
		lst = lst->next;
		if (templist->next == NULL)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		templist = templist->next;
	}
	return (newlist);
}
