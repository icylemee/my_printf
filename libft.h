/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:19:13 by mlemee            #+#    #+#             */
/*   Updated: 2025/05/15 15:27:14 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
typedef struct s_list
{
	void 				*content;
	struct s_list		*next;
}	t_list;

int		ft_strlen(const char *s);
int 	ft_isalpha(int c);
int 	ft_isalnum(int c);
int 	ft_isascii(int c);
int 	ft_isprint(int c);
int 	ft_isdigit(int c);
int 	ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int 	ft_atoi(const char *nptr);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_putchar_fd(char c);
void 	ft_putendl_fd(char *s, int fd);
int 	ft_putnbr_fd(int n);
int		ft_putstr_fd(char *s);

size_t	ft_strlcpy(char *, const char *, size_t);
size_t	ft_strlcat(char *dest, const char *src, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strtrim(char const *s1, char const *set);
char 	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);

int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_front(t_list **lst, t_list *new);


int		ft_putnbr_unsigned(unsigned int num);
char	*ft_conv_hexa(unsigned int n, const char *set);
char 	*ft_majuscules(char *s);




#endif 