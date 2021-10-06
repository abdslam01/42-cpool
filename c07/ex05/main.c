#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int main(void)
{
	//char **s = ft_split(",hello,world,,one,", ",");
	char **s = ft_split("             ", "  ");
	int i=0;
	while (s[i])
	{
		printf("%s\n", s[i]);
		free(s[i++]);
	}
	free(s);
	printf("executed correctly...");
}
