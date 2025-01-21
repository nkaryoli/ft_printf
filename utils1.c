/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:10:44 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/21 18:58:39 by knieves-         ###   ########.fr       */
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
	while (*str != '\0')
	{
		write(1, str, 1);
		count++;
		str++;
	}
	return (count);
}

int	print_digits(long num, int base)
{
	int	count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (num < 0)
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

int     print_digits_hexa(long num, int base)
{
        int     count;
        char    *symbols;

        symbols = "0123456789ABCDEF";
        if (num < 0)
        {
                write(1, "-", 1);
                return (print_digits_hexa(-num, base) + 1);
        }
        else if (num < base)
        {
                return (print_char(symbols[num]));
        }
        else
        {
                count = print_digits_hexa(num / base, base);
                return (count + print_digits_hexa(num % base, base));
        }
}



int	print_ptr_to_hexa(long *ptr)
{
		
}























