/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:52:47 by wkrati            #+#    #+#             */
/*   Updated: 2025/07/20 20:57:50 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] ='\0';
	return (dest);
}
int main()
{
	char src[] = "Hello 42!";
	char dest[100];	
	ft_strcpy(dest, src);
    
	printf(" %s\n", dest);
}
