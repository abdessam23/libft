/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:43:15 by abhimi            #+#    #+#             */
/*   Updated: 2024/10/25 10:25:35 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft"
#include <stdio.h>

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int r;

	i = 0;
	r = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] =='-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;	
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r *= 10;
		r += str[i] - '0';
		i++;
	}
	r *= sign;
	return (r);
}

#include <stdlib.h>
/* 
int main()
{
	char  str[] = "-2147483649";
	printf("%d\n",atoi(str));
	printf("%d",ft_atoi(str));
	
} */

int main() {
    // Test cases
    printf("my_atoi(\"123\") = %d\n", ft_atoi("10000000000000000000000000000000")); // 123
    printf("my_atoi(\"-456\") = %d\n", ft_atoi("--456")); // -456
    printf("my_atoi(\"   789   \") = %d\n", ft_atoi("   789   ")); // 789
    printf("my_atoi(\"2147483647\") = %d\n", ft_atoi("2147483647")); // 2147483647
    printf("my_atoi(\"-2147483648\") = %d\n", ft_atoi("-2147483648")); // -2147483648
    printf("my_atoi(\"2147483648\") = %d\n", ft_atoi("2147483648")); // 2147483647 (overflow)
    printf("my_atoi(\"-2147483649\") = %d\n", ft_atoi("-2147483649")); // -2147483648 (underflow)
    printf("my_atoi(\"abc123\") = %d\n", ft_atoi("abc123")); // 0 (invalid input)
    printf("my_atoi(\"\") = %d\n", ft_atoi("")); // 0 (empty string)
	printf("---------------------------------------\n");
	 printf("atoi(\"123\") = %d\n", atoi("10000000000000000000000000000000")); // 123
    printf("atoi(\"-456\") = %d\n", atoi("--456")); // -456
    printf("atoi(\"   789   \") = %d\n", atoi("   789   ")); // 789
    printf("atoi(\"2147483647\") = %d\n", atoi("2147483647")); // 2147483647
    printf("atoi(\"-2147483648\") = %d\n", atoi("-2147483648")); // -2147483648
    printf("atoi(\"2147483648\") = %d\n", atoi("2147483648")); // 2147483647 (overflow behavior)
    printf("atoi(\"-2147483649\") = %d\n", atoi("-2147483649")); // -2147483648 (underflow behavior)
    printf("atoi(\"abc123\") = %d\n", atoi("abc123")); // 0 (invalid input)
    printf("atoi(\"\") = %d\n", atoi("")); // 0 (empty string)

    return 0;
}
