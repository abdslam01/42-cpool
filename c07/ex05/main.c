#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int main(void)
{
	char **s = ft_split(",hello,world,,one,", ",");
	int i=0;
	while (s[i][0])
	{
		printf("%s\n", s[i]);
		free(s[i++]);
	}
	free(s[i]); // free the terminating pointer
	free(s);
}
