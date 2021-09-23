#include <unistd.h>
void ft_print_combn(int nb);
int main(void)
{
	ft_print_combn(0);
	write(1, "\n", 1);
	ft_print_combn(5);
	write(1, "\n", 1);
	ft_print_combn(10);

	return 0;
}