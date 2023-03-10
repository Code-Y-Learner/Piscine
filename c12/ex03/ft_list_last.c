#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*tail;

	tail  = begin_list;
	while (tail->next != 0)
		tail = tail->next;
	return (tail);
}
