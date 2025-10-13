/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:59:32 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/13 15:24:35 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strrchr(char *str, int c)
{
	int i;

	i = 0;
	char *temp;

	temp = NULL;
	while(str[i])
	{
		if (str[i] == c)
			temp = &str[i];
		i++;
	}
	return (temp);
}
