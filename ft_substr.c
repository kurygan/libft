/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:19:13 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/27 11:35:55 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char	*non_const_s;
	char	*subbed;

	i = 0;
	non_const_s = (char *)s;
	subbed = malloc(sizeof(char) * len);
	if(!subbed)
		return (NULL);
	while(i < start && *non_const_s)
	{
		i++;
		non_const_s++;
	}
	ft_strlcpy(subbed, non_const_s, len + 1);
	return (subbed);
}

/* int main(void)
{
	char *str = "lorem ipsum dolor sit amet";
	char *dest = ft_substr(str, 0, 10);
	printf("%s\n", dest);
	return 0;
} */
