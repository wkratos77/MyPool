/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkrati <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 22:54:10 by wkrati            #+#    #+#             */
/*   Updated: 2025/07/20 10:18:52 by wkrati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	strcmp(const char *s1, const char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] && s2[i])
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
int main()
{
	char *s1 = "Hello";
	char *s2 = "Hello";
	int r;
       r = strcmp(s1,s2);
	
       printf("%d",r);
}
