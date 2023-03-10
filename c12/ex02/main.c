#include "ft_list_push_front.c"
#include "ft_list_size.c"

int	main(void)
{
	int		i;
	t_list	*head;

	i = 0;
	head = NULL;
	while (i++ < 10)
	{
		ft_list_push_front(&head, &i);
		printf("%d\n", *(int *)head->data);
	}
	printf("size : %d\n", ft_list_size(head));
}
