/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:58:37 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/13 15:19:08 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <stdlib.h>
# include <unistd.h>


int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s1);

void	ft_putchar(char c);

int	ft_isdigit(char c);

char * ft_strrchr(char *str, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isalpha(char c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);

char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
