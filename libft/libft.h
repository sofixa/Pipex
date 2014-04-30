/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:20:50 by kmesas            #+#    #+#             */
/*   Updated: 2014/04/30 16:57:54 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# define BUFF_SIZE 10

typedef struct s_element	t_element;
struct						s_element
{
	char					*element;
	t_element				*next;
};

typedef struct s_row		t_row;
struct						s_row
{
	t_element				*first;
};

typedef struct s_list		t_list;
struct						s_list
{
	struct s_list			*prev;
	void					*content;
	size_t					content_size;
	struct s_list			*next;
};

typedef struct s_lstelem	t_lstelem;
struct						s_lstelem
{
	char					*str;
	struct s_lstelem		*prev;
	struct s_lstelem		*next;
};

typedef struct s_lstround	t_lstrnd;
struct						s_lstround
{
	struct s_lstelem		*root;
	size_t					len;
};

void						ft_putchar(char c);
void						ft_putstr(char const *s);
void						ft_putnbr(long nbr);
void						ft_putendl(char const *s);

void						ft_putchar_fd(char c, int fd);
void						ft_putstr_fd(char const *s, int fd);
void						ft_putnbr_fd(int n, int fd);
void						ft_putendl_fd(char const *s, int fd);
int							ft_putchar_tty(int c);

t_row						*row_init(void);
void						row_thread(t_row *row, char *new_elm);
char						*row_process(t_row *row);

t_lstrnd					*lstrnd_init(void);
void						lstrnd_free(t_lstrnd *list);
void						lstrnd_del(t_lstrnd **list);
void						lstrnd_addprev(t_lstrnd *list, t_lstelem *element,
											char *str);
void						lstrnd_addnext(t_lstrnd *list, t_lstelem *element,
											char *str);
void						lstrnd_rmelm(t_lstrnd *list, t_lstelem *element);

char						**ft_sort_ascii(int len, char **tab);

void						ft_lstpopone(t_list **lst, void (*del)(void *,
											size_t));
t_list						*ft_lstnew(void const *content,
										size_t content_size);
t_list						*ft_lstmap(t_list *lst,
										t_list *(*f)(t_list *elem));
void						ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void						ft_lstdelone(t_list **alst, void (*del)(void *,
											size_t));
void						ft_lstdel(t_list **alst, void (*del)(void *,
										size_t));
void						ft_lstaddbot(t_list **alst, t_list *new);
void						ft_lstadd(t_list **alst, t_list *new);

int							get_next_line(int const fd, char **line);

void						*ft_memset(void *b, int c, size_t len);
void						ft_bzero(void *s, size_t n);
void						*ft_memcpy(void *s1, const void *s2, size_t n);
void						*ft_memccpy(void *s1, const void *s2, int c,
										size_t n);
void						*ft_memmove(void *s1, const void *s2, size_t n);
void						*ft_memchr(const void *s, int c, size_t n);
int							ft_memcmp(const void *s1, const void *s2, size_t n);
size_t						ft_strlen(const char *s);
char						*ft_strdup(const char *s1);
char						*ft_strndup(const char *s1, size_t n);
char						*ft_strcpy(char *s1, const char *s2);
char						*ft_strncpy(char *s1, const char *s2, size_t n);
char						*ft_strcat(char *s1, const char *s2);
char						*ft_strncat(char *s1, const char *s2, size_t n);
size_t						ft_strlcat(char *dst, const char *src, size_t size);
char						*ft_strchr(const char *s, int c);
char						*ft_strrchr(const char *s, int c);
char						*ft_strstr(const char *s1, const char *s2);
char						*ft_strnstr(const char *s1, const char *s2,
										size_t n);
int							ft_strcmp(const void *s1, const void *s2);
int							ft_strncmp(const char *s1, const char *s2,
										size_t n);
int							ft_atoi(const char *str);
int							ft_isalpha(int c);
int							ft_isdigit(int c);
int							ft_isalnum(int c);
int							ft_isascii(int c);
int							ft_isprint(int c);
int							ft_toupper(int c);
int							ft_tolower(int c);
void						*ft_memalloc(size_t size);
void						ft_memdel(void **ap);
char						*ft_strnew(size_t size);
void						ft_strdel(char **as);
void						ft_strclr(char *s);
void						ft_striter(char *s, void (*f)(char *));
void						ft_striteri(char *s, void (*f)(unsigned int,
										char *));
char						*ft_strmap(char const *s, char (*f)(char));
char						*ft_strmapi(char const *s, char (*f)(unsigned int,
										char));
int							ft_strequ(char const *s1, char const *s2);
int							ft_strnequ(char const *s1, char const *s2,
										size_t n);
char						*ft_strsub(char const *s, unsigned int start,
										size_t len);
char						*ft_strjoin(char const *s1, char const *s2);
char						*ft_strtrim(char const *s);
char						**ft_strsplit(char *str, char c);
char						*ft_itoa(int n);

#endif
