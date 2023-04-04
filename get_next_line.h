/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:34:33 by lumorale          #+#    #+#             */
/*   Updated: 2023/01/16 15:56:40 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_next_line(char *str);
char	*ft_get_line(char *str);
char	*ft_read_file(int fd, char *str);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strjoin(char *s1, char *s2, int n);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);

#endif