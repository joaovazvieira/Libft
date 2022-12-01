/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:54:22 by jovieira          #+#    #+#             */
/*   Updated: 2022/12/01 13:56:16 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa_unsigned(unsigned long long nb, char *base);
char	*ft_itoa(int nb);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s1);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_printf(const char *str, ...);

typedef struct s_flags
{
	int	hash;
	int	minus;
	int	plus;
	int	precision;
	int	space;
	int	zero;
}			t_flags;

typedef struct f_specifier
{
	va_list		data;
	const char	*format;
	char		*buffer;
	int			glob_i;
	int			rtn;
}			t_specifier;

int		checker(t_specifier *store);
int		specifier(char const index, t_specifier *store);
int		printer(t_specifier	*store);

typedef int		(*t_funPointer)(t_specifier *list);
int		ft_putchar(t_specifier *store);
int		ft_putstr(t_specifier *store);
int		pointer_conv(t_specifier *store);
int		up_conv(t_specifier *store);
int		put_char(t_specifier *store);
int		low_conv(t_specifier *store);
int		ft_putnbr(t_specifier *store);
int		ft_putnbr_unsigned(t_specifier *store);
int		ft_putprcnt(t_specifier *store);

#endif