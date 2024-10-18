/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkettab <mkettab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:08:04 by mkettab           #+#    #+#             */
/*   Updated: 2024/10/19 01:41:27 by mkettab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	*ft_strchr(const char *s, int c);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);

#endif
