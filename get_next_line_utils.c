/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:34:24 by lumorale          #+#    #+#             */
/*   Updated: 2023/01/16 13:56:44 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	size_t	i;

	str = malloc(nmemb * size);
	if (!str)
		return (0);
	i = 0;
	while (i < size)
	{
		((unsigned char *)str)[i] = 0;
		i++;
	}
	return (str);
}

char	*ft_strjoin(char *s1, char *s2, int n)
{
	char	*str;
	int		s1len;

	s1len = ft_strlen(s1);
	str = malloc(sizeof(char) * (s1len + n + 1));
	if (!str)
		return (0);
	ft_memcpy(str, s1, s1len);
	ft_memcpy(&str[s1len], s2, n);
	str[s1len + n] = 0;
	free(s1);
	return (str);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (0);
}

size_t	ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	if (!str)
		return (0);
	while (str[counter] != 0)
		counter++;
	return (counter);
}
