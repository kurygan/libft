/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:26:01 by mkettab           #+#    #+#             */
/*   Updated: 2024/11/01 23:31:11 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_words(char const *s, char c)
{
	int	counts;
	int	i;

	i = 0;
	counts = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			counts++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (counts);
}

static char	**ft_free_all(char **splitted, int j)
{
	while (j-- > 0)
		free(splitted[j]);
	free(splitted);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		i;
	int		start;
	int		j;

	if (!s)
		return (NULL);
	splitted = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!splitted)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		splitted[j] = ft_substr(s, start, i - start);
		if (!splitted[j])
			return (ft_free_all(splitted, j));
		j++;
	}
	return (splitted[j] = NULL, splitted);
}

// int main(void)
// {
// 	char *str = "\0aa\0bbb";
// 	char c = '\0';
// 	char **split = ft_split(str, c);

// 	for (int i = 0; i < ft_count_words(str, c); i++)
// 		printf("%s\n", split[i]);
// 	return 0;
// }
