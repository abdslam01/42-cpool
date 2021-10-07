#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char **arr;

	arr = ft_split("exit with success,,,nj,,, ", ", ");
	int i = -1;
	while (arr[++i])
		printf("%s\n", arr[i]);
	printf("exit with success");
}
