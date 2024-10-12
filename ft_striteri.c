/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:36:52 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/11 13:39:42 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(unsigned int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

void	increase_char(unsigned int index, char *c)
{
	char	old;

	old = *c;
	*c = *c + 1;
	write(1, "Índice ", 7);
	ft_putnbr(index);
	write(1, ": '", 3);
	ft_putchar(old);
	write(1, "' -> '", 6);
	ft_putchar(*c);
	write(1, "'\n", 2);
}

/*int	main(void)
{
	char str[] = "Hola";

	write(1, "Cadena original: ", 17);
	write(1, str, 4);
	write(1, "\n", 1);
	ft_striteri(str, increase_char);
	write(1, "Cadena modificada: ", 19);
	write(1, str, 4);
	write(1, "\n", 1);
	return (0);
}*/
