#include <stdio.h>
#define RED    "\033[1;31m"
#define GREEN  "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET  "\033[0m"

int	ft_fibonacci(int index);

int	main(void) {
	printf(YELLOW "========== ex04 ==========\n"RESET );
	printf(YELLOW "TC #01          \n"RESET );
	printf("Testcase: fib(-10)\n");
	printf("Expected: %d\n", -1);
	printf("Result  : %d\n", ft_fibonacci(-10));
	printf(YELLOW "TC #02          \n"RESET );
	printf("Testcase: fib(0)\n");
	printf("Expected: %d\n", 0);
	printf("Result  : %d\n", ft_fibonacci(0));
	printf(YELLOW "TC #03          \n"RESET );
	printf("Testcase: fib(15)\n");
	printf("Expected: %d\n", 610);
	printf("Result  : %d\n", ft_fibonacci(15));
	printf(YELLOW "TC #04          \n"RESET );
	printf("Testcase: fib(2)\n");
	printf("Expected: 1\n");
	printf("Result  : %d\n", ft_fibonacci(2));
	printf(YELLOW "TC #05          \n"RESET );
	printf("Testcase: fib(22)\n");
	printf("Expected: 17711\n");
	printf("Result  : %d\n", ft_fibonacci(22));
	printf("\n");
}
