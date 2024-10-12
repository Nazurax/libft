/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:29:30 by alortiz-          #+#    #+#             */
/*   Updated: 2024/09/27 17:31:18 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*int	main(void)
{
	char let1 = 'a';
	char let2 = 'Z';
	char let3 = '5';
	char let4 = ')';

	if (ft_isalpha(let1))
		printf("'%c' is a letter.\n", let1);
	else
		printf("'%c' isn't letter.\n", let1);

	if (ft_isalpha(let2))
		printf("'%c' is a letter.\n", let2);
	else
		printf("'%c' isn't letter.\n", let2);

	if (ft_isalpha(let3))
		printf("'%c' is a letter.\n", let3);
	else
		printf("'%c' isn't letter.\n", let3);

	if (ft_isalpha(let4))
		printf("'%c' is a letter.\n", let4);
	else
		printf("'%c' isn't letter.\n", let4);

	return (0);
}*/
