/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:19:13 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/24 17:47:28 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i = 0;
	char	*non_const_s = (char *)s;
	char	*subbed;
	if(!(subbed = malloc(sizeof(char) * len)))
		return NULL;
	while(i < start)
	{
		i++;
		non_const_s++;
	}
	ft_strlcpy(subbed, non_const_s, len);
	return (subbed);
}

int main(void)
{
	char *str = "Hello, World!";
	char *dest = ft_substr(str, 7, 6);
	printf("%s\n", dest);
	return 0;
}
