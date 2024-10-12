/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:16:22 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/01 10:16:23 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 65 && c <= 90))
		return (c + 32);
	return (c);
}
/*int	main(void)
{
	char	tst1 = 'X';
	char	tst2 = '?';
	char	tst3 = '6';
	char	tst4 = 'h';
	
	printf("Test before 1:	%c\n",tst1);	
	printf("Test after 1:	%c\n",ft_tolower (tst1));
	printf("Test before 2:	%c\n",tst2);	
	printf("Test after 2:	%c\n",ft_tolower (tst2));
	printf("Test before 3:	%c\n",tst3);	
	printf("Test after 3:	%c\n",ft_tolower (tst3));
	printf("Test before 4:	%c\n",tst4);	
	printf("Test after 4:	%c\n",ft_tolower (tst4));
	return (0);
}*/
