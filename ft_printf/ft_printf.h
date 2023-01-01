/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 14:59:26 by suchen            #+#    #+#             */
/*   Updated: 2022/05/15 14:59:28 by suchen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_printf(const char *string, ...);
void	ft_putchar_len(char c, int *l);
void	ft_putnbr_d(int n, int *l);
void	ft_putstr_str(char *args, int *l);
void	ft_hex(unsigned int x, int *l, char c);
void	ft_uns(unsigned int c, int *l);
void	ft_p(size_t p, int *l);

#endif
