#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int *********nbr;
	int ********nbr2;
	int *******nbr3;
	int ******nbr4;
	int *****nbr5;
	int ****nbr6;
	int ***nbr7;
	int **nbr8;
	int *nbr9;
	int nbr10;

	nbr9 = &nbr10;
	nbr8 = &nbr9;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr = &nbr2;
	ft_ultimate_ft(nbr);
	printf("%d", nbr);
}
