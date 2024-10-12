/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:05:10 by alortiz-          #+#    #+#             */
/*   Updated: 2024/09/27 15:07:06 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 00 && c <= 127)
		return (1);
	return (0);
}
/*int	main(void)
{
	int w = 64;
	int x = 33;
	int y = 36;
	int z = 95;

	if (ft_isascii(w))
		printf("'%c' is a ascii.\n", w);
	else
		printf("'%c' isn't ascii.\n", w);

	if (ft_isascii(x))
		printf("'%c' is a ascii.\n", x);
	else
		printf("'%c' isn't ascii.\n", x);

	if (ft_isascii(y))
		printf("'%c' is a ascii.\n", y);
	else
		printf("'%c' isn't ascii.\n", y);

	if (ft_isascii(z))
		printf("'%c' is a ascii.\n", z);
	else
		printf("'%c' isn't ascii.\n", z);
}*/
