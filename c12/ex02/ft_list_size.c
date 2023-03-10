#include "ft_list.h"

int	ft_list_size(t_list *begin_list);

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*tmp;

	if (!begin_list)
		return (0);
	else if (begin_list->next == 0)
		return (1);
	i = 0;
	tmp = begin_list;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

/*int	ft_list_size(t_list *begin_list)
{
	if (begin_list->next == 0)
		return (0);
	return (1 + ft_list_size(begin_list->next));
}*/
