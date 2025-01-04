#ifndef LIBFT_H
#define LIBFT_H

char	*ft_strstr(char *str, char *to_find);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int	ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size);
char *ft_strdup(const char *string);
char	*ft_strcpy(char *dest, char *src);
int	ft_strcmp(char *s1, char *s2);
char *ft_strchr(char *str, int search_str);
char	*ft_strcat(char *dest, char *src);
char **ft_split(char *str, char *charset);
int	ft_atoi(char *str);

#endif