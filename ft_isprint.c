/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:34:52 by alortiz-          #+#    #+#             */
/*   Updated: 2024/09/27 17:34:56 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int	main(void)
{
	char w = ' ';
	char x = '	';
	char y= '5';
	char z = ')';

	if (ft_isprint(w))
		printf("'%c' is a printable character.\n", w);
	else
		printf("'%c' isn't printable character.\n", w);

	if (ft_isprint(x))
		printf("'%c' is a printable character.\n", x);
	else
		printf("'%c' isn't printable character.\n", x);

	if (ft_isprint(y))
		printf("'%c' is a printable character.\n", y);
	else
		printf("'%c' isn't printable character.\n", y);

	if (ft_isprint(z))
		printf("'%c' is a printable character.\n", z);
	else
		printf("'%c' isn't printable character.\n", z);

	return (0);
}*/
