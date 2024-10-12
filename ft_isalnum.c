/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:15:11 by alortiz-          #+#    #+#             */
/*   Updated: 2024/09/27 14:15:14 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*int	main(void)
{
	char let1 = 'a';
	char let2 = '&';
	char let3 = '5';
	char let4 = '$';

	if (ft_isalnum(let1))
		printf("'%c' is a alphanumeric.\n", let1);
	else
		printf("'%c' isn't alphanumeric.\n", let1);

	if (ft_isalnum(let2))
		printf("'%c' is a alphanumeric.\n", let2);
	else
		printf("'%c' isn't alphanumeric.\n", let2);

	if (ft_isalnum(let3))
		printf("'%c' is a alphanumeric.\n", let3);
	else
		printf("'%c' isn't alphanumeric.\n", let3);

	if (ft_isalnum(let4))
		printf("'%c' is a alphanumeric.\n", let4);
	else
		printf("'%c' isn't alphanumeric.\n", let4);

	return (0);
}*/
