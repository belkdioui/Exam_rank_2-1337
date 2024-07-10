#include<stdlib.h>

int count_word(char *str)
{
	int i;
	int check;
	int count;

	i = 0;
	count = 0;
	check = 0;
	while(str[i])
	{
		check = 0;
		while(str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		while(str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			check = 1;
			i++;
		}
		if(check == 1)
			count++;
	}
	return count;
}

int count_len_word(char *str)
{
 	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		i++;
	while(str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		count++;
		i++;
	}
	return count;
}

char **ft_split(char *str)
{
	char **split;
	int i;
	int len_of_w;
	int j;
	int k;
	int count_w;

	i = 0;
	k = 0;
	count_w = count_word(str);
	split = malloc(sizeof(char*) * count_word(str) + 1);
	if (!split)
		return 0;
	while(count_w)
	{
		j = 0;
		len_of_w = count_len_word(str+k);
		split[i] = malloc(sizeof(char) * len_of_w + 1);
		if (!split[i])
			return (0);
		while(str[k] && (str[k] == ' ' || str[k] == '\n' || str[k] == '\t'))
				k++;
		while(str[k] && str[k] != ' ' && str[k] != '\n' && str[k] != '\t')
		{
			split[i][j] = str[k];
			j++;
			k++;
		}
		split[i][j] = '\0';
		i++;
		count_w--;
	}
	split[i]=0;
	return split;
}

