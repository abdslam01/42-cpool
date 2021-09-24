#include <unistd.h>
void ft_putnbr(int nb);
int main(void)
{
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(1 << (sizeof(int) * 8 - 1));

	return 0;
}