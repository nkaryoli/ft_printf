/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:18:13 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/22 16:25:57 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int j)
{
	return (write(1, &j, 1));
}

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	if (specifier == 'p')
		count += print_ptr_to_hexa(va_arg(ap, uintptr_t));
	if (specifier == 'd')
		count += print_digits((long)va_arg(ap, int), 10);
	if (specifier == 'i')
		count += print_digits((long)va_arg(ap, int), 10);
	if (specifier == 'u')
		count += print_digits((long)va_arg(ap, unsigned int), 10);
	if (specifier == 'x')
		count += print_digits((long)va_arg(ap, unsigned int), 16);
	if (specifier == 'X')
		count += print_digits_hexa((long)va_arg(ap, unsigned int));
	if (specifier == '%')
		count += print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += print_format(*format, ap);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	return (count);
}
