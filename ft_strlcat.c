/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:11:09 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/21 21:24:16 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*catted;
	size_t	i;
	size_t	len_dst;

	catted = dst;
	i = 0;
	len_dst = ft_strlen(dst);
	while (*catted)
		catted++;
	while (src[i] && i < dstsize)
	{
		catted[i] = src[i];
		i++;
	}
	catted[i] = 0;
	return (len_dst + ft_strlen(src));
}
