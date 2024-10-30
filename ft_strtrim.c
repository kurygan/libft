/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 00:25:29 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/30 21:10:51 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	
	if(!s1 || !set)
		return NULL;
	if(!ft_strlen(s1))
		return (ft_strdup(""));
	while(*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1) - 1;
	while(ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}