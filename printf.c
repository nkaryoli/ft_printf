/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:03:06 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/21 21:11:56 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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

int	main(void)
{
	int	count = 0;
	char *str = " World!";
	char c = 'a';
	int	i = -157;
	int	d = 3879;
	int	n = 95;
	int	*p = &n;

	count = ft_printf("Single caracter: %c\n", c);
        ft_printf("los caracteres escritos son %d\n", count);
        count = printf("Single caracter: %c\n", c); 
        printf("printf %d\n\n", count);

        count = ft_printf("String: Hello %s\n", str);
        ft_printf("los caracteres escritos son %d\n", count);
	count = printf("String: Hello %s\n", str);
	ft_printf("Printf: %d\n\n", count);

	count = ft_printf("Decimal number 3879: %d\n", d);
	ft_printf("los caracteres escritos son %d\n", count);
	count = printf("Decimal number 3879: %d\n", d);
	ft_printf("printf %d\n\n", count);

	count = ft_printf("Integer -157: %i\n", i);
        ft_printf("los caracteres escritos son %d\n", count);
        count = printf("Integer -157: %i\n", i); 
        ft_printf("printf %d\n\n", count);

        count = ft_printf("Unsigned Integer -157: %u\n", i);
        ft_printf("los caracteres escritos son %d\n", count);
        count = printf("Unsigned Integer -157: %u\n", i);
        ft_printf("printf %d\n\n", count);

	count = ft_printf("Number in Hexadecimal 95:  %x\n", n);
        ft_printf("los caracteres escritos son %d\n", count);
	count = printf("Number in Hexadecimal 95:  %x\n", n);
        ft_printf("printf: %d\n", count);

	count = ft_printf("Number in HEXADECIMAL 95:  %X\n", n);
        ft_printf("los caracteres escritos son %d\n", count);
        count = printf("Number in HEXADECIMAL 95:  %X\n", n);
        ft_printf("printf: %d\n", count);
	
	
	count = ft_printf("%%\n");
	ft_printf("los caracteres escritos son %d\n", count);
	count = printf("%%\n");
	ft_printf("los caracteres escritos son %d\n", count);

        count = ft_printf("%p\n", (void *)p);
        ft_printf("los caracteres escritos son %d\n", count);
        count = printf("%p\n", (void *)p);
        ft_printf("los caracteres escritos son %d\n", count);

	return (0);
}
