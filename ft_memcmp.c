/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tylerlover911 <tylerlover911@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:00:36 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/20 18:45:33 by tylerlover9      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*char_s1;
	unsigned char	*char_s2;
	size_t			i;

	char_s1 = (unsigned char *)s1;
	char_s2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (char_s1[i] && char_s2[i] && *char_s1 == *char_s2 && i < n - 1)
	{
		char_s1++;
		char_s2++;
	}
	return (*char_s1 - *char_s2);
}
