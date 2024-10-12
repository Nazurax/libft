/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:15:45 by alortiz-          #+#    #+#             */
/*   Updated: 2024/09/27 14:15:48 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*int	main(void)
{
	char dig1 = 'a';
	char dig2 = 'Z';
	char dig3 = '5';
	char dig4 = ')';

	if (ft_isdigit(dig1))
		printf("'%c' is a digit.\n", dig1);
	else
		printf("'%c' isn't digit.\n", dig1);

	if (ft_isdigit(dig2))
		printf("'%c' is a digit.\n", dig2);
	else
		printf("'%c' isn't digit.\n", dig2);

	if (ft_isdigit(dig3))
		printf("'%c' is a digit.\n", dig3);
	else
		printf("'%c' isn't digit.\n", dig3);

	if (ft_isdigit(dig4))
		printf("'%c' is a digit.\n", dig4);
	else
		printf("'%c' isn't digit.\n", dig4);

	return (0);
}*/
