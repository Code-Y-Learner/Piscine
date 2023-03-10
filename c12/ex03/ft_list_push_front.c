#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	new_elem->next = 0;
	new_elem->data = data;
	return (new_elem);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*head;

	head = ft_create_elem(data);
	head->next = *begin_list;
	*begin_list = head;
}
