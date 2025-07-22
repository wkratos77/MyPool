/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:04:51 by wkrati            #+#    #+#             */
/*   Updated: 2025/07/20 11:55:36 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int	result;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{	
			result = s1[i] - s2[i];
			return (result);
		}
		if(s1[i] == '\0' || s2[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (0) ;
}
int main()
{
	int r = ft_strncmp("abd", "abc", 3);
	printf("%d",r);
}
