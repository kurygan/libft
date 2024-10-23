/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:11:09 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/23 17:36:52 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*catted;
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	catted = dst;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	j = 0;
	while (catted[j])
		j++;
	if (dstsize == 0)
		return (dstsize + len_src);
	while (src[i] && j + i < dstsize - 1)
	{
		catted[j + i] = src[i];
		i++;
	}
	catted[j + i] = 0;
	if (dstsize < len_dst)
		return (dstsize + len_src);
	return (len_dst + len_src);
}
