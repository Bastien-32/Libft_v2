/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:05:47 by badal-la          #+#    #+#             */
/*   Updated: 2025/03/21 10:42:52 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	ft_upper(unsigned int i, char c)
{
	(void) i;
	if (c >= 'a' && c <= 'z')
		c -= 32;
}
*/

/**
 * @brief Apply a function to each character of a string with its index.
 * @param s (char *) String to iterate over.
 * @param f (void (*)(unsigned int, char *)) Function applied to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

int main (void)
{
	char *str = "Hello la compagnie 42!";
	char *dest;
	dest = ft_strmapi(str, ft_upper);
	if (dest)
	{
		printf("%s\n", dest);
		free(dest);
	}
}
*/