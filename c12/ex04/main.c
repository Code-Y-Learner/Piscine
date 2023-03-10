#include "ft_list.h"
#include "ft_list_push_back.c"

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
	int		i;
	t_list	*index;
	t_list	*head;
	int		arr[10];

	i = 0;
	index = ft_create_elem(&arr[i]);
	arr[0] = 0;
	head = index;
	while (++i < 10)
	{
		arr[i] = i;
		ft_list_push_back(&index, &arr[i]);
	}
	while (index->next != 0)
	{
		printf("%p : %d\n", index->next, *(int *)index->data);
		index = index->next;
	}
	ft_free(head);
	return (0);
}
