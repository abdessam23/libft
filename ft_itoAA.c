/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoAA.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:45:49 by abhimi            #+#    #+#             */
/*   Updated: 2024/10/28 16:47:44 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_itoa(int n)
{
    char    *str;
    char        *p;
    int        l;
    int        i;
    int nb;
    nb = n;
    i  = 0;
    if (nb < 0)
        nb = -nb;
   
    while ( nb > 0)
    {
            nb = nb /10;
            l++;
    }
  
    if ( n < 0)
        l += 1;
       
    str = malloc(sizeof(char) * (l + 1));
    if (!str)
        return (NULL);
    if (n == 0)
        str [i] = '0';
    if (n != 0)
    {
        if (n < 0)
            n -= n;
        while (n > 0)
        {
            str[i] = n % 10 +'0';
            n = n / 10;
            i++;
        }
    }
    
        return str;
}


// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char    *ft_ptt(int n)
{
    char    *str;
    int        l;
    int        i;
    int nb;
    nb = n;
    i  = 0;
    l = 0;
    if (nb < 0)
        nb = -nb;

    while ( nb >= 10)
    {
            nb = nb /10;
            l++;
    }
    if ( 0 <= nb && nb <= 9)
          l += 1;
    if ( n < 0)
        l = l + 1;

    str = malloc(sizeof(char) * (l + 1));
    if (!str)
        return (NULL);
    nb = n;
    if (nb == 0)
        str [i] = '0';
    if (nb != 0)
    {
        if (nb < 0)
            nb = -nb;
        while (nb > 0)
        {
            str[i] = nb % 10 +'0';
            nb = nb / 10;
            i++;
        }
    }
    if (n < 0)
    {
        str[i] = '-';
        str[i + 1] = '\0';
    }
    if (n > 0)
      str[i] = '\0';
    else
      str[i+1] = '\0';
    return str;
}
char *ft_itoa(int n)
{
    char *p;
    char *st;
    int i = 0;
    int len = 0;
    st = ft_ptt(n);

    len = strlen(st);
    p = malloc(sizeof(char) * (len + 2));
    if (!p)
        return (NULL);
    if (n !=  0)
    {
        while (len > 0)
        {
            p[i++] = st[len - 1];
            len--;
        }

    }

    /*if (n > 0)
    {  i = 0;
        while (len > 0)
            p[i++] = st[len - 1];
            len--;
    }*/
    else
        p[i] = '0';
    p[i] = '\0';
    return (p);
}

int main()
{
    printf("%s", ft_itoa(0));
    return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char    *ft_ptt(int n)
{
    char    *str;
    int        l;
    int        i;
    int nb;
    nb = n;
    i  = 0;
    l = 0;
    if (nb < 0)
        nb = -nb;

    while ( nb >= 10)
    {
            nb = nb /10;
            l++;
    }
    if ( 0 <= nb && nb <= 9)
          l += 1;
    if ( n < 0)
        l = l + 1;

    str = malloc(sizeof(char) * (l + 1));
    if (!str)
        return (NULL);
    nb = n;
    if (nb == 0)
        str [i] = '0';
    if (nb != 0)
    {
        if (nb < 0)
            nb = -nb;
        while (nb > 0)
        {
            str[i] = nb % 10 +'0';
            nb = nb / 10;
            i++;
        }
    }
    if (n < 0)
    {
        str[i] = '-';
        str[i + 1] = '\0';
    }
    if (n > 0)
      str[i] = '\0';
    else
      str[i+1] = '\0';
    return str;
}
char *ft_itoa(int n)
{
    char *p;
    char *st;
    int i = 0;
    int len = 0;
    if (n == -2147483648) {
        p = malloc(12); // Length for "-2147483648" + null terminator
        if (!p) return NULL;
        strcpy(p, "-2147483648");
        return (p);
    }
    st = ft_ptt(n);
    len = strlen(st);
    p = malloc(sizeof(char) * (len + 1));
    if (!p)
        return (NULL);

    if (n !=  0)
    {
        while (len > 0)
        {
            p[i++] = st[len - 1];
            len--;
        }

    }

    /*if (n > 0)
    {  i = 0;
        while (len > 0)
            p[i++] = st[len - 1];
            len--;
    }*/
    if (n == 0)
    {
        p[i] = '0';
        p[i+1] = '\0';
    }
    if (n != 0)
      p[i] = '\0';
    return (p);
}

int main() {
    char *result = ft_itoa(-2147483648);
    printf("%s\n", result); // Should output: "-123"
    free(result); // Don't forget to free the memory!
    return 0;
}
