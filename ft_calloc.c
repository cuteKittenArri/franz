/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 00:50:04 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/17 13:43:16 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb == 0 || size == 0)
	{
		array = (malloc(1));
		ft_bzero(array, 1);
		return (array);
	}
	if (size >= SIZE_MAX / nmemb)
		return (0);
	array = malloc(size * nmemb);
	if (!array)
		return (0);
	ft_bzero(array, nmemb * size);
	return (array);
}
