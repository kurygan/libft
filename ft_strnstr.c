/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 02:46:36 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/18 18:16:54 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*verif_chars(
	char *haystack, char *needle,
	size_t len_needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i <= len - len_needle && haystack[i])
	{
		while (j <= len_needle)
		{
			if (needle[j] == 0)
				return (haystack + i);
			if (haystack[j + i] != needle[j])
				break ;
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*char_haystack;
	char	*char_needle;
	size_t	len_haystack;
	size_t	len_needle;
	char	*result;

	len_haystack = ft_strlen(haystack);
	len_needle = ft_strlen(needle);
	char_haystack = (char *)haystack;
	char_needle = (char *)needle;
	if (*char_needle == 0)
		return (char_haystack);
	if (len_needle > len_haystack)
		return (NULL);
	result = verif_chars(char_haystack, char_needle, len_needle, len);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}

/*int main(){
	const char *str1 = "abcdef";
	const char *str2 = "cdef";

	const char *found = ft_strnstr(str1, str2, 3);

	printf("%s\n", found);
}*/