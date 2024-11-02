/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:48:59 by mkettab           #+#    #+#             */
/*   Updated: 2024/11/02 15:55:15 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int			i;

	(void)0, temp = lst, i = 0;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
