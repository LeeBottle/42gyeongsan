/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeolee <byeolee@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:00:50 by byeolee           #+#    #+#             */
/*   Updated: 2025/01/10 17:53:51 by byeolee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int n);
int				ft_strlen(const char *str);
void			*ft_memset(void *ptr, int value, size_t num);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *destination, const void *source, size_t num);
void			*ft_memmove(void *destination, const void *source, size_t num);
int				ft_strlcpy(char *des, const char *src, size_t dstsize);
unsigned int	ft_strlcat(char *destination, char *source, size_t size);
int				ft_toupper(int n);
int				ft_tolower(int n);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t count);
void			*ft_memchr(const void *buf, int c, size_t count);
int				ft_memcmp(void *destination, const void *source, size_t num);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_atoi(char *str);
void			*ft_calloc(size_t elt_count, size_t elt_size);
char			*ft_strdup(const char *string);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif