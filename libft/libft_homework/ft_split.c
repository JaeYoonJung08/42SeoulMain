/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyojun <jaeyojun@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:45:35 by jaeyojun          #+#    #+#             */
/*   Updated: 2023/03/20 14:08:54 by jaeyojun         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	string_check(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}


int	malloc_count(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] && (string_check(s[i], c) == 1))
			i++;
		if (s[i])
		{
			count++;
			i++;
		}
		while (s[i] && (string_check(s[i], c) == 0))
			i++;
	}	
	return (count);
}

char    **ft_free(char **word)
{
    int i;
	
    i = 0;
    while (word[i])
    {
        free(word[i]);
        i++;
    }
    return (0);
}

char	*word_input(char const *s, char c)
{
	int		i;
	char	*temp;
	int		count;
	int		j;

	j = 0;
	count = 0;
	i = 0;
	while (s[i] != '\0' && string_check(s[i], c) == 0)
	{
		i++;
		count++;
	}
	temp = (char *)malloc(sizeof(char) * count + 1);
	if (!temp)
		return (0);
	while (s[j] != '\0' && string_check(s[j], c) == 0)
	{
		temp[j] = s[j];
		j++;
	}
	temp[j] = '\0';
	return (temp);
}



char	**ft_split(char const *s, char c)
{
	char	**temp;
	int		count;
	int		size;

	count = 0;
	size = malloc_count(s, c);
	temp = (char **)malloc(sizeof(char *) * (size + 1));
	while (*s)
	{
		while (*s && string_check(*s, c) == 1)
			s++;
		if (*s)
		{
			temp[count] = word_input(s, c);
			if (temp[count] == 0)
				return (ft_free(temp));
			count++;
			s++;
		}
		while (*s && (string_check(*s, c) == 0))
			s++;
	}
	temp[count] = 0;
	return (temp);
}
// "aa aa aa" " "

// int main()
// {
// 	char s1[100] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
// 	char s = ' ';
// 	char **temp = ft_split(s1, s);
	
// 	int i = 0;
// 	while (temp[i])
// 	{
// 		printf("%s\n", temp[i]);
// 		i++;
// 	}
// 	free(temp);
// }
