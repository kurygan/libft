/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:17:48 by mkettab           #+#    #+#             */
/*   Updated: 2024/11/02 01:48:31 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	char_c;
	size_t			i;

	(void)0, char_c = (unsigned char)c, i = 0, ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] != char_c)
			i++;
		else
			return (ptr + i);
	}
	return (NULL);
}

/* int main(){
	char s[] = {1, 2, 3, 4, 5};
	char *help = ft_memchr(s, 0, 0);
	return EXIT_SUCCESS;
} */