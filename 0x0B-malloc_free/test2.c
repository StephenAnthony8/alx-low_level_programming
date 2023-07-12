#include <stdio.h>
int char_count(char *str, int i, int flag) /* i for the iteration count , flag 1 for character count) */
{
        int count;
        count = 0;
        for (; str[i] != '\0'; i++)
                if (str[i] >= 'A' && str[i] <= 'z')
                {
                        if (flag == 1)
                                count++;
                        if (str[i + 1] == ' ' || str[i + 1] == '\0')
                        {
                                if (flag == 1)
                                {
                                        i++;
                                        break;
                                }
                                else
                                        count++;
                        }
                }
                else if ((!(str[i] >= 'A' && str[i] <= 'z')) && (flag == 1))
                        count = 0;
        return (count);
}
int main(void)
{
	printf("%d\n", char_count("Hello every Nyan", 0, 1));
	return (0);
}
