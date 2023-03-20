#include <stdio.h>
#define RED    "\033[1;31m"
#define GREEN  "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET  "\033[0m"

int	ft_is_prime(int nb);

int	main(void) {
	printf(YELLOW "========== ex06 ==========\n"RESET );
	printf(YELLOW "TC #01          \n"RESET );
	printf("Testcase: 841\n");
	printf("Expected: %d\n", 0);
	printf("Result  : %d\n", ft_is_prime(841));
	printf(YELLOW "TC #02          \n"RESET );
	printf("Testcase: 33989\n");
	printf("Expected: %d\n", 0);
	printf("Result  : %d\n", ft_is_prime(1155276869));
	printf(YELLOW "TC #03          \n"RESET );
	printf("Testcase: -2136\n");
	printf("Expected: %d\n", 0);
	printf("Result  : %d\n", ft_is_prime(-2136));
	printf(YELLOW "TC #04          \n"RESET );
	printf("Testcase: 2\n");
	printf("Expected: %d\n", 1);
	printf("Result  : %d\n", ft_is_prime(3));
	printf(YELLOW "TC #05          \n"RESET );
	printf("Testcase: 14281 "RED"[TLE!]\n"RESET);
	printf("Expected: %d\n", 1);
	printf("Result  : %d\n", ft_is_prime(14281));
	printf(YELLOW "TC #06          \n"RESET );
	printf("Testcase: 1354828 "RED"[TLE!]\n"RESET);
	printf("Expected: %d\n", 0);
	printf("Result  : %d\n", ft_is_prime(1354828));
	printf(YELLOW "TC #07          \n"RESET );
	printf("Testcase: 2147483647 "RED"[TLE!]\n"RESET);
	printf("Expected: %d\n", 1);
	printf("Result  : %d\n", ft_is_prime(2147483647));
	printf("\n");
}
