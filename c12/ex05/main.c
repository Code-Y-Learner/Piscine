#include "ft_list.h"
#include "ft_list_push_strs.c"

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
	char	*words[5] = {"first", "second", "third", "forth", "fifth"};
	t_list	*head;
	t_list	*index;

	head = 0;
	head = ft_list_push_strs(5, words);
	index = head;
	while (index != 0)
	{
		printf("%p : %s\n", index->next, (char *)index->data);
		index = index->next;
	}
	ft_free(head);
	return (0);
}
