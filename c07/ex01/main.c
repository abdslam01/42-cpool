#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int *arr = ft_range(5, 10);
	for(int i=0; i < 5; i++)
		printf("%d, ", arr[i]);
}
