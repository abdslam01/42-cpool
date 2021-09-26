#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		nb *= -1;
		ft_putchar('-');
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
    int	*n1;
    int	**n2;
    int	***n3;
    int	****n4;
    int	*****n5;
    int	******n6;
    int	*******n7;
    int	********n8;
    int	*********n9;

	n2 = &n1;
	n3 = &n2;
	n4 = &n3;
	n5 = &n4;
	n6 = &n5;
	n7 = &n6;
	n8 = &n7;
	n9 = &n8;
    ft_ultimate_ft(n9);
    ft_putnbr(*********n9);
    return (0);
}
