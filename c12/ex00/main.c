#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*input;

	input = (t_list *)malloc(sizeof(t_list));
	input ->next = 0;
	input ->data = data;
	return (input);
}

int	main(void)
{
	char	*data = "this is awesome";
	t_list	*head;
	
	head = ft_create_elem(data);
	printf("%p\n", head->next);
	printf("%s\n", (char *)(head->data));
	free(head);
	return (0);
}
