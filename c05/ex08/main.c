#include <unistd.h>
#include <stdio.h>

int	ft_ten_queens_puzzle(void);

int	main(void)
{
	int answer;

	answer = ft_ten_queens_puzzle();
	printf("%d",answer);
}
