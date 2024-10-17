/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:25:12 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/17 19:05:44 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	index;
	int	result;

	sign = 1;
	result = 0;
	if (*str == '-')
	{
		sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		index = *str - '0';
		result = (result * 10) + index;
		str++;
	}
	return (result * sign);
}
