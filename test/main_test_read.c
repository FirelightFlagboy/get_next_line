/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_read.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 09:42:29 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/23 10:15:17 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
# include <fcntl.h>

int main(int argc, char const *argv[])
{
	char	file1[] = "test_a";
	char	file2[] = "test_b";
	int		buff_size = 1;
	char	buff[buff_size + 1];
	int		f1;
	int		f2;
	int		st;

	if ((f1 = open(file1, O_RDONLY)) == -1)
		return (1);
	if ((f2 = open(file2, O_RDONLY)) == -1)
		return (1);
	printf("f1:%d f2:%d\n", f1, f2);
	ft_strclr(buff);
	st = read(f1, buff, buff_size);
	printf("%s\n", buff);
	ft_strclr(buff);
	st = read(f2, buff, buff_size);
	printf("%s\n", buff);
	st = read(f1, buff, buff_size);
	printf("%s\n", buff);
	ft_strclr(buff);
	st = read(f2, buff, buff_size);
	printf("%s\n", buff);
	return 0;
}
