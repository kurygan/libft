/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:16:18 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/30 19:40:35 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	j;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	joined = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	j = 0;
	if (!joined)
		return (NULL);
	while (*s1)
		joined[j++] = *s1++;
	while (*s2)
		joined[j++] = *s2++;
	joined[j] = 0;
	return (joined);
}

int main(){
	char s1[] = "lorem ipsum";
	char s2[] = "dolor sit amet";
	char *dest = ft_strjoin(s1, s2);
	printf("%s\n", dest);
}