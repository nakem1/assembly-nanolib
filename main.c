/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmurray <lmurray@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 19:37:01 by lmurray           #+#    #+#             */
/*   Updated: 2021/02/21 22:36:58 by lmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
size_t		ft_strlen(char *str);
void		ft_putstr(char *str);
void		ft_putchar(char *ch);
size_t		ft_write(int fd, const char *ch, size_t n);
size_t		ft_read(int fd, void *buffer, size_t n);


int			main(void)
{
	size_t rifl;
	int		fd;
	char	*ch;

	fd = open("mekan.txt", O_RDONLY);
	ft_read(fd, ch, 1);
	// ft_putchar(ch);
	write(1, ch, 1);
	return (0);
}
