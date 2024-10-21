/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 03:55:10 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/21 04:13:33 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*calloced;

	calloced = malloc(count * size);
	if (!calloced)
		return (NULL);
	ft_memset(calloced, 0, (count * size));
	return (calloced);
}
