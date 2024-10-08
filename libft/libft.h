#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
int	ft_strlen(const char * restrict str);
size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
char *ft_toupper(char *str);
char *ft_tolower(char *str);
int	ft_strlen(const char * str);
int ft_isprint(int c);
int ft_isdigit(int x);
int ft_isascii(int c);
int ft_isalpha(char c);
int ft_isalnum(int x);
#endif