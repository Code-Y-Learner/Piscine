#include "ft_list.h"
#include "ft_list_push_front.c"
#include "ft_list_last.c"

void	ft_free(t_list *begin_list)
{
	t_list	*tmp;

	while (begin_list != 0)
	{
		tmp = begin_list;
		begin_list = begin_list->next;
		free(tmp);
	}
}

int	main(void)
{
	t_list	*index;
	int		i;
	t_list	*tail;

	i = 0;
	index = 0;
	while (i++ < 10)
		ft_list_push_front(&index, &i);
	tail = ft_list_last(index);
	printf("%p : %d\n", tail, *(int *)tail->data);
	ft_free(index);
	return (0);
}
