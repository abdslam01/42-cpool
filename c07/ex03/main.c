#include <unistd.h>
#include <stdlib.h>
char	*ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	int i;
	char *str;
	char *s = "abc\0def\0jfdj";
	char *strs[3] = {s,s+4,s+8};
	str = ft_strjoin(3, (char **) strs, "-_-");
	i = -1;
	while (str[++i])
		write(1, str + i, 1);
	free(str);
}
