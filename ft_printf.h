/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:58:22 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/21 21:29:50 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>

int	ft_printf(const char *format, ...);
int	print_format(char specifier, va_list ap);
int	print_char(int c);
int	print_str(char *str);
int	print_digits(long num, int base);
int	print_digits_hexa(long num);
int	print_ptr_to_hexa(uintptr_t ptr);

#endif
