/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alortiz- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:57:56 by alortiz-          #+#    #+#             */
/*   Updated: 2024/10/03 15:58:02 by alortiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (nmemb != 0 && total_size / nmemb != size)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*int	main(void)
{
	int	*arr;
	int n;
	
	n = 5;
	arr = (int *)ft_calloc(n, sizeof(int));
	if (arr == NULL)
	{
		printf("Error al asignar memoria.\n");
		return (1);
	}
	printf("The elements of the array are:\n");
	if (n >= 1) printf("Element 1: %d\n", arr[0]);
	if (n >= 2) printf("Element 2: %d\n", arr[1]);
	if (n >= 3) printf("Element 3: %d\n", arr[2]);
	if (n >= 4) printf("Element 4: %d\n", arr[3]);
	if (n >= 5) printf("Element 5: %d\n", arr[4]);
	free(arr);
	return (0);
}*/
