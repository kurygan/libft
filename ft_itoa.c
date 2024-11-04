/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:14:21 by mkettab           #+#    #+#             */
/*   Updated: 2024/11/04 18:12:54 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_assign(int n, int len, int limits, char *dest)
{
	while (len > limits)
	{
		dest[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	int		len;
	int		limits;
	char	*dest;

	(void)0, len = ft_intlen(n), limits = 0;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	if (n == INT32_MIN)
	{
		ft_strlcpy(dest, "-2147483648", 12);
		return (dest);
	}
	if (n == 0)
		dest[0] = '0';
	if (n < 0)
	{
		dest[0] = '-';
		limits = 1;
		n = -n;
	}
	dest[len] = '\0';
	ft_assign(n, len, limits, dest);
	return (dest);
}

// int main(){
// 	printf("%s\n", ft_itoa(5231));
// 	return EXIT_SUCCESS;
// }