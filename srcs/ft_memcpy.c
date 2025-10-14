/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 08:25:07 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/14 09:36:01 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *src2;
	unsigned char *dest2;

	i = 0;
	src2 = (unsigned char *)src;
	dest2 = dest;
	while(i < n)
	{
		dest2[i] = src2[i];
		i++;	
	}
	return(dest2);
}
