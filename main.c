#include <stdio.h>
#include "libprintf.h"

int	main()
{
	int	test_p;
	int i = 0, j = 0;
	
	test_p = 12;
	char	*test = "salut";
	void* pointer = NULL;
	ft_printf("------------------------------        TEST 1        ------------------------------\n");
	i = ft_printf("Mon printf :    " "%p\n", test);
	j = printf("Vrai printf :   " "%p\n", test);
	ft_printf(" mon printf :%d\n", i);
	printf(" vrai printf :%d\n", j);
	ft_printf("------------------------------        TEST 2        ------------------------------\n");
	i = ft_printf("Mon printf :    " "%c\n", 'c');
	j = printf("Vrai printf :   " "%c\n", 'c');
	ft_printf(" mon printf :%d\n", i);
	printf(" vrai printf :%d\n", j);
	ft_printf("------------------------------        TEST 3        ------------------------------\n");
	i = ft_printf("Mon printf :    " "%s\n", "");
	j = printf("Vrai printf :   " "%s\n", "");
	ft_printf(" mon printf :%d\n", i);
	printf(" vrai printf :%d\n", j);
	i = 0;
	j = 0;
	ft_printf("------------------------------        TEST 4        ------------------------------\n");
	i = ft_printf("Mon printf :    " "%d\n", -2147483647);
	j = printf("Vrai printf :   " "%d\n", -2147483647);
	ft_printf(" mon printf :%d\n", i);
	printf(" vrai printf :%d\n", j);
	i = 0;
	j = 0;
	ft_printf("------------------------------        TEST 5        ------------------------------\n");
	i = ft_printf("Mon printf :    " "%u\n", (unsigned int)4294967295);
	j = printf("Vrai printf :   " "%u\n", (unsigned int)4294967295);
	ft_printf(" mon printf :%d\n", i);
	printf(" vrai printf :%d\n", j);
	i = 0;
	j = 0;
	ft_printf("------------------------------        TEST 6        ------------------------------\n");
	i = ft_printf("Mon printf :    " "Salut a tous!\n");
	j = printf("Vrai printf :   " "Salut a tous!\n");
	ft_printf(" mon printf :%d\n", i);
	printf(" vrai printf :%d\n", j);
	i = 0;
	j = 0;
	ft_printf("------------------------------        TEST 7        ------------------------------\n");
	i = ft_printf("Mon printf :    " "Salut a tous!\n");
	j = printf("Vrai printf :   " "Salut a tous!\n");
	ft_printf(" mon printf :%d\n", i);
	printf(" vrai printf :%d\n", j);
	i = 0;
	j = 0;
	ft_printf("------------------------------        TEST 8        ------------------------------\n");
	i = ft_printf("Mon printf :    " "%x\n", -2147413647);
	j = printf("Vrai printf :   " "%x\n", -2147413647);
	ft_printf(" mon printf :%d\n", i);
	printf(" vrai printf :%d\n", j);
	i = 0;
	j = 0;
	ft_printf("------------------------------        TEST 9        ------------------------------\n");
	i = ft_printf("Mon printf :    " "%X\n", -2147413650);
	j = printf("Vrai printf :   " "%X\n", -2147413650);
	ft_printf(" mon printf :%d\n", i);
	printf(" vrai printf :%d\n", j);
	i = 0;
	j = 0;
	ft_printf("------------------------------        TEST 10        ------------------------------\n");
	ft_printf("                 ce test comporte plusieurs combinaisons de valeurs                \n");
	ft_printf("===================================================================================\n");
	ft_printf("                                    Mon printf :    \n" "%d | entier | \n%c | char | \n%s | string \n%x | valeure hexa minuscule | \n%X | valeure hexa majuscule | \n%u | unsigned int | \n ", 341, 'e', "test", 7654, 7654, (unsigned int)4134167265);
	ft_printf("===================================================================================\n");
	printf("                                   Vrai printf :   \n" "%d | entier | \n%c | char | \n%s | string \n%x | valeure hexa minuscule | \n%X | valeure hexa majuscule | \n%u | unsigned int | \n ", 341, 'e', "test", 7654, 7654, (unsigned int)4134167265 );
	ft_printf("-----------      Si tous les résultats sont identiques, c'est bon.      -----------\n");


/* A faire 
	- unsigned
	- pointeurs*/
}
