#include <time.h>
#include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
#include <limits.h>
#include <stdlib.h>

char *read_char(char *filename)
{
	int		fd;
	char	*buff;
	char	c_buff[1];
	int		i;

	buff = (char *)malloc(sizeof(char) * 250000200000);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return ((void *)0);
	read(fd, c_buff, 1);
	buff[0] = *c_buff;
	i = 1;
	while (read(fd, c_buff, 1) != -1)
	{
		buff[i] = *c_buff;
		i++;
	}
	close(fd);
	return (buff);
}

long int get_file_size(char *filename)
{
	int			fd;
	char		*buff;
	char		c_buff[1];
	long int		i;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	i = 0;
	while (*c_buff >= 0)
	{
		read(fd, c_buff, 1);
		i++;
	}
	close(fd);
	return (i);
}

char *read_file(char *filename)
{
	int		fd;
	int		lastpos;
	char	*buff;
	int		i;
	long long int		buff_size;

	buff_size = 2000000000; 
	buff = (char *)malloc(sizeof(char) * buff_size);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return ((void *)0);
	i = 0; 
	lastpos = read(fd, buff, buff_size);
	buff[lastpos] = '\0';
	close(fd);
	return (buff);
}


int main()
{
	clock_t	t;
	double	time_taken;

	t = clock();
	//get_file_size("map2500");
	printf("%ld", get_file_size("map2500"));
	t = clock() - t;
	time_taken = ((double)t)/CLOCKS_PER_SEC;
	printf("%f", time_taken);
}
