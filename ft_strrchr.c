/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:14:34 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/17 21:38:44 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	char *last_occ = NULL;

	while (*s)
	{
		if (*s == c)
		{
			last_occ = (char *)s;
		}
		s++;
	}
	if (c == 0)
		return 0;
	if (last_occ != NULL)
		return last_occ;
	return (NULL);
}
