/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 13:20:17 by wkrati            #+#    #+#             */
/*   Updated: 2025/07/21 18:27:44 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (dest[i])
	{	
		i++;
	}
	while(src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char src[]= "test";
	char dest[20] = "first";
	printf("%s",ft_strcat(dest,src));

}
