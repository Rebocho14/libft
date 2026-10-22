/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:04:54 by panibal           #+#    #+#             */
/*   Updated: 2026/10/22 13:42:49 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>




int	ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int ft_isprint(int c);

int ft_tolower(int c);
int ft_toupper(int c);

size_t  ft_strlen(const char *s);

int ft_atoi(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);

#endif