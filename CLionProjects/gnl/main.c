#include "get_next_line.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
//    char	*line_fd1;
//    int		p_fd1[2];
//    int		fd1 = 1;
//    int		out_fd1 = dup(fd1);
//
//    pipe(p_fd1);
//    dup2(p_fd1[1], fd1);
//    write(fd1, "111\n222\n", 8);
//    dup2(out_fd1, fd1);
//    close(p_fd1[1]);
//
//    get_next_line(p_fd1[0], &line_fd1);
//    if (strcmp(line_fd1, "111") == 0) {
//        printf("%s", line_fd1);
//    }
//
//    int		fd;
////    //int		fd2;
//    char    *mass;
//	int i = 0;
////
////
//    fd = open(argv[1], O_RDONLY);
////    //fd2 = open(argv[2], O_RDONLY);
//    if (argc > 1)
////    {
//		while ((i = get_next_line(fd, &mass)) > 0)
//		{
//			printf("%s\n", mass);
//			free(mass);
//		}
////        get_next_line(fd2, &mass);
//        printf("%d\n", i);
////        get_next_line(fd, &mass);
////        printf("%s\n", mass);
////    }
//    close (fd);
    //close (fd2);
	//system("leaks get_next_line");

//	char 	*line;
//	int		out;
//	int		p[2];
//	char 	*str;
//	int		len = 50;
//
//	str = (char *)malloc(1000 * 1000);
//	*str = '\0';
//	while (len--)
//		strcat(str, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur in leo dignissim, gravida leo id, imperdiet urna. Aliquam magna nunc, maximus quis eleifend et, scelerisque non dolor. Suspendisse augue augue, tempus");
//	out = dup(1);
//	pipe(p);
//	dup2(p[1], 1);
//
//	if (str)
//		write(1, str, strlen(str));
//	close(p[1]);
//	dup2(out, 1);
//	get_next_line(p[0], &line);
//	printf("%s\n", line);

	int fd;
	int i;
	char *line;

	fd = open(argv[1], O_RDONLY);
	if (argc >= 1)
	{
		while ((i = get_next_line(fd, &line)) > 0)
		{
			ft_putstr(line);
			ft_putstr("\n");
			free(line);
		}
		printf("i :%d\n", i);
	}
	close(fd);
    return (0);
}
