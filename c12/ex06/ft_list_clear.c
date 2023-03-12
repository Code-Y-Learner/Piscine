#include "ft_list.h"
#include <string.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	new_elem -> next = 0;
	new_elem -> data = data;
	return (new_elem);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*head;

	head = ft_create_elem(data);
	head -> next = *begin_list;
	*begin_list = head;
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*tmp;

	while (begin_list != 0)
	{
		tmp = begin_list;
		(*free_fct)(begin_list->data);
		begin_list = begin_list->next;
		free(tmp);
	}
}

void	print(void *data)
{
	printf("data: %s", (char *)data);
	free((char *)data);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	t_list	*head;

	head = 0;
	str1 = (char *)malloc(sizeof(char) * 13);
	strcpy(str1, "hellowWorld\n");
	str2 = (char *)malloc(sizeof(char) * 13);
	strcpy(str2, "Second\n");
	ft_list_push_front(&head, str1);
	ft_list_push_front(&head, str2);
	ft_list_clear(head, print);
	return (0);
}
