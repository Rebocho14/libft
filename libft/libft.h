/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:04:54 by panibal           #+#    #+#             */
/*   Updated: 2026/10/28 15:47:21 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>



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
int	ft_memcmp(const void *s1, const void *s2, size_t size);
void	*memcpy(void *dest, const void *src, size_t n);

void	ft_bzero(void *s, size_t n);

void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putendl_fd(char *s, int fd);


#endif