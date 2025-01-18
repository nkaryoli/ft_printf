/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 18:03:06 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/18 19:22:42 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_str(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		write(1, str, 1);
		count++;
		str++;
	}
	return (count);
}

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap; // objeto que contendra los argumentos para iterer luego.
	int	count; // contador de los caracteres a imprimir

	va_start(ap, format); // inizializo ap con el pointer al 2do argumento.
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%') // consigo el % para identificar el type.
			count += print_format(*(++format), ap); 
				// paso el especifier que me dara el type.
		count += write(1, format, 1);
		format++;
	}
	return (count);
}

int	main(void)
{
	int	count;

	count = ft_printf("Hello %s\n", "John");
//	ft_printf("los coracteres escritos son %d\n", count);
	return (0);
}
