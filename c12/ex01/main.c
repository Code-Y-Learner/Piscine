#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_list_create_elem(void *data);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*next_list;

	next_list = ft_list_create_elem(data);
	next_list->next = *begin_list;
	*begin_list = next_list;
	//free(next_list);
}

t_list	*ft_list_create_elem(void *data)
{
	t_list	*input;

	input = (t_list *)malloc(sizeof(t_list));
	input->next = 0;
	input->data = data;
	return (input);
}

int	main(void)
{
	char	*str1 = "first";
	char	*str2 = "second";
	t_list	*first_head;

	first_head = NULL;
	ft_list_push_front(&first_head, str1);
	printf("%p : %s\n", first_head->next, (char *)first_head->data);
	ft_list_push_front(&first_head, str2);
	printf("%p : %s\n", first_head->next, (char *)first_head->data);
	printf("%p %s\n", first_head->next, (char *)first_head->next->data);
	system("leaks a.out;");
	return (0);
}
