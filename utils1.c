/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:10:44 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/21 21:15:46 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_char(int j)
{
	return (write(1, &j, 1));
}

int	print_str(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		write(1, str, 1);
		count++;
		str++;
	}
	return (count);
}

int	print_digits(long num, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (num < 0 && base == 10)
	{
		write(1, "-", 1);
		return (print_digits(-num, base) + 1);
	}
	else if (num < base)
	{
		return (print_char(symbols[num]));
	}
	else
	{
		count = print_digits(num / base, base);
		return (count + print_digits(num % base, base));
	}
}

int	print_digits_hexa(long num)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (num < 16)
	{
		return (print_char(symbols[num]));
	}
	else
	{
		count = print_digits_hexa(num / 16);
		return (count + print_digits_hexa(num % 16));
	}
}

int	print_ptr_to_hexa(uintptr_t ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
		return (print_str("0x0"));
	count += print_str("0x");
	count += print_digits(ptr, 16);
	return (count);
}
