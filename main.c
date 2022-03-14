#include <stdio.h>
#include "libprintf.h"

int	main()
{
	int i = 0, j = 0;
	
	int	a = 78;
	int	*p;
	p = &a;

	void* p2 = NULL;

	ft_printf("------------------------------        Test 01 : c        ------------------------------\n");
	i = ft_printf("ft_printf :    %c\n", 'c');
	j = printf("    printf :   %c\n", 'c');
	ft_printf(" ft_print :%d\n", i);
	printf(" printf :%d\n", j);
	i = 0;
	j = 0;

	ft_printf("------------------------------        Test 02 : s        ------------------------------\n");
	i = ft_printf("ft_printf :    %s\n", "");
	j = printf("    printf :   %s\n", "");
	ft_printf(" ft_print :%d\n", i);
	printf(" printf :%d\n", j);
	i = 0;
	j = 0;

	ft_printf("------------------------------        Test 03 : p        ------------------------------\n");
	i = ft_printf("ft_printf :    %p\n", p2);
	j = printf("    printf :   %p\n", p2);
	ft_printf(" ft_print :%d\n", i);
	printf(" printf :%d\n", j);
	i = 0;
	j = 0;

	ft_printf("------------------------------        Test 04 : d        ------------------------------\n");
	i = ft_printf("ft_printf :    %d\n", -2147483647);
	j = printf("    printf :   %d\n", -2147483647);
	ft_printf(" ft_print :%d\n", i);
	printf(" printf :%d\n", j);
	i = 0;
	j = 0;
	
	ft_printf("------------------------------        Test 07 : i        ------------------------------\n");
	i = ft_printf("ft_printf :    %i\n", -2147483647);
	j = printf("    printf :   %i\n", -2147483647);
	ft_printf(" ft_print :%d\n", i);
	printf(" printf :%d\n", j);
	i = 0;
	j = 0;

	ft_printf("------------------------------        Test 06 : u        ------------------------------\n");
	i = ft_printf("ft_printf :    %u\n", (unsigned int)40000000000);
	j = printf("    printf :   %u\n", (unsigned int)40000000000);
	ft_printf(" ft_print :%d\n", i);
	printf(" printf :%d\n", j);
	i = 0;
	j = 0;

	ft_printf("------------------------------        Test 07 : x        ------------------------------\n");
	i = ft_printf("ft_printf :    %x\n", -2147413647);
	j = printf("    printf :   %x\n", -2147413647);
	ft_printf(" ft_print :%d\n", i);
	printf(" printf :%d\n", j);
	i = 0;
	j = 0;

	ft_printf("------------------------------        Test 08 : X        ------------------------------\n");
	i = ft_printf("ft_printf :    %X\n", -2147413650);
	j = printf("    printf :   %X\n", -2147413650);
	ft_printf(" ft_print :%d\n", i);
	printf(" printf :%d\n", j);
	i = 0;
	j = 0;

	ft_printf("------------------------------        Test 09 : %%      ------------------------------\n");
	i = ft_printf("ft_printf : %%\n");
	j = printf("   printf : %%\n");
	ft_printf("ft_printf :%d\n", i);
	printf("printf :%d\n", j);
	i = 0;
	j = 0;

	ft_printf("------------------------------    Test 10 : simple text   ------------------------------\n");
	i = ft_printf("ft_printf : Random text\n");
	j = printf("   printf : Random text\n");
	ft_printf(" ft_print :%d\n", i);
	printf(" printf :%d\n", j);
	i = 0;
	j = 0;

}
