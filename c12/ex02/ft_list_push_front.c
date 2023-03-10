#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_list_create_elem(void *data);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_list;

	new_list = ft_list_create_elem(data);
	new_list->next = *begin_list;
	*begin_list = new_list;
}

t_list	*ft_list_create_elem(void *data)
{
	t_list	*input;

	input = (t_list *)malloc(sizeof(t_list));
	input->next = 0;
	input->data = data;
	return (input);
}
