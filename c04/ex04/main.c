void	ft_putnbr_base(int nbr, char *base);
int		ft_basecheck(char *base);

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define RED    "\033[1;31m"
#define GREEN  "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE   "\033[1;34m"
#define RESET  "\033[0m"
#define PASS(res) res == 1 ? printf( GREEN " (\xE2\x9C\x93)" RESET ) : printf( RED " (x)"  RESET );
#define RET(res, ret) res == 1 ? printf( GREEN "%d\n" RESET, ret) : printf( RED "%d\n" RESET, ret);
int main()
{

        printf(YELLOW "\nTEST1: nbr is" BLUE " 0" RESET);
        printf("\n" );
        printf("-------------------------------\n");
        printf("Decimal:  "); fflush( stdout ); ft_putnbr_base(0, "0123456789");
        printf(BLUE "\nExpected: %d\n\n" RESET , 0);
        
        printf("Hex:      "); fflush( stdout ); ft_putnbr_base(0, "0123456789abcdef");
		printf(BLUE "\nExpected: %s\n\n" RESET , "0");

        printf("Binary:   "); fflush( stdout ); ft_putnbr_base(0, "01");
		printf(BLUE "\nExpected: %s\n\n" RESET , "0");

        printf("poneyvif: "); fflush( stdout ); ft_putnbr_base(0, "poneyvif");
		printf(BLUE "\nExpected: %s\n\n" RESET , "p");
        printf("-------------------------------\n\n");

        usleep(500000);

        printf(YELLOW "\nTEST2: nbr is" BLUE " MIN_NT" RESET);
        printf("\n" );
        printf("-------------------------------\n");
        printf("Decimal:  "); fflush( stdout ); ft_putnbr_base(-2147483648, "0123456789");
        printf(BLUE "\nExpected: %s\n\n" RESET , "-2147483648");
        
        printf("Hex:      "); fflush( stdout ); ft_putnbr_base(-2147483648, "0123456789abcdef");
		printf(BLUE "\nExpected: %s\n\n" RESET , "-80000000");

        printf("Binary:   "); fflush( stdout ); ft_putnbr_base(-2147483648, "01");
		printf(BLUE "\nExpected: %s\n\n" RESET , "-10000000000000000000000000000000");

        printf("poneyvif: "); fflush( stdout ); ft_putnbr_base(-2147483648, "poneyvif");
		printf(BLUE "\nExpected: %s\n\n" RESET , "-npppppppppp");
        printf("-------------------------------\n\n");

        usleep(500000);

        printf(YELLOW "\nTEST3: nbr is" BLUE " MAX_NT" RESET);
        printf("\n" );
        printf("-------------------------------\n");
        printf("Decimal:  "); fflush( stdout ); ft_putnbr_base(2147483647, "0123456789");
        printf(BLUE "\nExpected: %d\n\n" RESET , 2147483647);
        
        printf("Hex:      "); fflush( stdout ); ft_putnbr_base(2147483647, "0123456789abcdef");
		printf(BLUE "\nExpected: %s\n\n" RESET , "7fffffff");

        printf("Binary:   "); fflush( stdout ); ft_putnbr_base(2147483647, "01");
		printf(BLUE "\nExpected: %s\n\n" RESET , "1111111111111111111111111111111");

        printf("poneyvif: "); fflush( stdout ); ft_putnbr_base(2147483647, "poneyvif");
		printf(BLUE "\nExpected: %s\n\n" RESET , "offffffffff");
        printf("-------------------------------\n\n");

		printf(YELLOW "\nTEST4 base is only 1 charactere" RESET);
        printf("\n" );
        printf("-------------------------------\n");
        printf("output:  "); fflush( stdout ); ft_putnbr_base(10, "p");
        printf(BLUE "\nExpected: \n\n" RESET);
        printf("-------------------------------\n\n");

        usleep(500000);

		printf(YELLOW "\nTEST5: base contain a wrong '+' charactere" RESET);
        printf("\n" );
        printf("-------------------------------\n");
        printf("output:  "); fflush( stdout );	ft_putnbr_base(10, "pone+yvif");
        printf(BLUE "\nExpected: \n\n" RESET);
        printf("-------------------------------\n\n");

        usleep(500000);

		printf(YELLOW "\nTEST6: base has double charactere" RESET);
        printf("\n" );
        printf("-------------------------------\n");
        printf("output:  "); fflush( stdout ); ft_putnbr_base(10, "ponpeyvif");
        printf(BLUE "\nExpected: \n\n" RESET);
        printf("-------------------------------\n\n");

		printf(YELLOW "\nTEST7: handle negative number" RESET);
        printf("\n" );
        printf("-------------------------------\n");
        printf("Decimal:  "); fflush( stdout ); 
        ft_putnbr_base(-5, "w1234t");
        printf(BLUE "\nExpected: %s\n\n" RESET , "-t");
        printf("-------------------------------\n\n");
}
