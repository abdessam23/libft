#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int check_chr(const char *s, const char c)
{
    int i;
    i= 0;
    while (s[i])
    {
        if (s[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int    ft_star(const char *s,const char *d)
{
    int i;
    int j;

    i = 0;
    while (s[i] != '\0')
    {
        if (!check_chr(d,s[i]))
            return (i);
        i++;
    }
    return (0);
}

int ft_end(const char *s2, const char *f)
{
    int len;

    len = strlen(s2) - 1 ;
    while (check_chr(f,s2[len]))
    {
        len--;
    }
    return (len);
    
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int        i;
    int        tl;
    int total;
    char    *t;
    
    i = ft_star(s1,set);
    tl = ft_end(s1,set);
    total = tl - i + 1;
    t = malloc(sizeof(char) * (total + 1));
    if (!t)
        return (NULL);
    int j = 0;
    while (j < total)
    {
        t[j] = s1[i];
        i++;
        j++;
    }
    t[j] = '\0';
    return (t);
}

