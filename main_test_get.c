/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 13:38:22 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/23 13:58:09 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
	int		fd;
	int		st;
	char	*str;

	if (argc != 2)
		printf("./%s <file to read>\n", argv[0]);
	else
	{
		if (!(fd = open(argv[1], O_RDONLY)))
			return (printf("%s not found or not a file\n", argv[1]));
		while ((st = get_next_line(fd, &str)) > 0)
			printf("%s\n", str);
		if (st == -1)
			return (printf("error when reading\n"));
		printf("%s\n", str);
	}
	return 0;
}
