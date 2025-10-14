/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:14:18 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/14 16:29:48 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void * calloc( size_t elementCount, size_t elementSize )
{
	size_t i;
	void *place;

	i = 0;
	*place = malloc(elementCount * elementSize);
	if (!place)
		return NULL;
	while(i != (elementCount * elementSize))
	{
		place[i] = 0;
		i++;
	}
	return (*place);
}
