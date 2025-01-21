/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:58:22 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/21 18:16:49 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int     ft_printf(const char *format, ...);
int     print_format(char specifier, va_list ap);
int     print_char(int c);
int     print_str(char *str);
int     print_digits(long num, int base);
int     print_digits_hexa(long num, int base);

#endif
