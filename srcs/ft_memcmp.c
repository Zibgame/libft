/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:48:07 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/14 14:10:51 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *v1; 
	unsigned char *v2; 

	i = 0;
	v1 = (unsigned char *)s1;
	v2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n-1 && v1[i] == v2[i])
	{
		i++;
	}
	return (v1[i] - v2[i]);
}
