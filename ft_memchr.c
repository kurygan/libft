/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:17:48 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/18 21:47:39 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	char_c;
	size_t			i;

	ptr = (unsigned char *)s;
	char_c = (unsigned char)c;
	i = 0;
	while (ptr[i] && i < n)
	{
		if (ptr[i] != char_c)
			i++;
		else
			return (ptr + i);
	}
	if (c == 0)
		return (ptr + i);
	return (NULL);
}
