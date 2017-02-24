/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:38:46 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/13 19:52:23 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;
int				ft_atoi(const char *str);
int				ft_isascii(int c);
int				ft_isblank(int c);
int				ft_isnumber(int c);
int				ft_isprint(int c);
int				ft_isupper(int c);
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstnew(void const *content, size_t content_size);
char			*ft_strcat(char *restrict s1, const char *restrict s2);
size_t			ft_strlcat(char *dst, const char *src, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t dsize);
char			*ft_strchr(const char *s, int c);
void			ft_strclr(char *s);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcpy(char *dest, char *src);
void			ft_strdel(char **ap);
char			*ft_strdup(const char *s1);
int				ft_strequ(char const *s1, char const *s2);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strncat(char *restrict s1,
const char *restrict s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strndup(const char *s1, size_t n);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strnstr(const char *big, const char *lit, size_t len);
char			*ft_strrchr(const char *s, int c);
char			**ft_strsplit(char const *s, char c);
char			*ft_strstr(const char *big, const char *lit);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			ft_putchar(char c);
void			ft_bzero(void *str, size_t n);
void			*ft_memcpy(void *out, const void *in, size_t l);
void			*ft_memset(const void *str, int s, size_t n);
void			*ft_memccpy(void *restrict u, const void *
restrict in, int c, size_t l);
void			*ft_memmove(void *to, const void *from, size_t len);
void			ft_putstr(char const *str);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			*ft_memchr(const void *b, int c, size_t l);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *s);
int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_counts(const char *s, char sep);
int				ft_countw(const char *s, char sep);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_itoa(int n);
void			ft_putstr_fd(char const *str, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif
