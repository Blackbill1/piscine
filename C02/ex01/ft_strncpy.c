/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:06:15 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/10 02:11:34 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{

	char	dest[] = "salut";
	char	src[] =  "Bonjour";
	int i = 0;
	int n = 2;
	//while (c1[i] != '\0' )
	//{
	//	printf("%c",c1[i]);
	//	i++;
	//}
	i = 0;
	ft_strncpy(dest, src, n);

	while (dest[i] != '\0')
	{
		printf("%c", dest[i]);
		i++;
	}
}*/
