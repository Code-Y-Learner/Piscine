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
