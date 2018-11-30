#include <stdio.h>
char **ft_split_whitespaces(char *str);

int main()
{
    int i;
    char *str = "Hello World! My name is Qwerty";
    char **result = ft_split_whitespaces(str);
    i = 0;
    while (result[i])
        printf("%s\n", result[i++]);

    return 0;
}
