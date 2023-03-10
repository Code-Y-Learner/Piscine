#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_list_last(t_list *begin_list);

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	new_elem->next = 0;
	new_elem->data = data;
	return (new_elem);
}

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*tail;
	tail = begin_list;
	while (tail->next != 0)
		tail = tail->next;
	return (tail);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tail;
	t_list	*new_elem;

	tail = ft_list_last(*begin_list);
	new_elem = ft_create_elem(data);
	tail->next = new_elem;
}
