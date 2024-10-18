/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 01:34:15 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/19 01:36:14 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*ptr;
	
	i = 0;
	ptr = (unsigned char *)s;
	while(ptr[i] && i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
