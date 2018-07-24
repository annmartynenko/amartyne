#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	uint8_t *a = (uint8_t *)"\xff\xaa\xde\x12";
    uint8_t *t = (uint8_t *)"\xff\xaa\xde\x12";
	uint8_t *b = (uint8_t *)"\xff\xaa\xde\x12MACOSAAAAA";
	char *c = "the cake is a lie !\0I'm hidden lol\r\n";
	char cc[] = "copy";
	char buf1[] = "there is no stars in the sky";
	char buf2[] = "there is no stars in the sky";
	void*p1, *p2;
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	char s1[4] = "";
	char s2[4] = "";
	int i = 0;
	char **f = ft_strsplit("split  ||this|for|me|||||!|", '|');
	char *dest;
	dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[11] = 'a';

	printf("%d\n", ft_power(4, -1));
/*	ft_putnbr(0);
	ft_putnbr(1);
	ft_putnbr(-1);
	ft_putnbr(12300);
	ft_putnbr(10203);
	ft_putnbr(-56);
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	printf("%d\n", ft_strncmp("q", "a", 0));
	printf("%d\n", strncmp("q", "a",0)); 
	printf("%s\n", ft_strnstr("Hello les genw", "les", 1));
	printf("%s\n", strnstr("Hello les genw","les", 1));
	printf("%d\n", ft_strnequ("test", "tests", 6));
	printf("%s\n", ft_memchr("abcdef", 999, 6));
	printf("%s\n", memchr("abcdef", 999, 6));
	printf("%s\n", itoa((-2147483647 -1)));
	printf("%s\n", ft_itoa((-2147483647 -1)));
    printf("%d\n", atoi(ft_itoa((-2147483647 -1))));
	while (*f)
	{
		printf("%s\n", *f);
		f++;
	}
	ft_putnbr(-2147483648);
    printf("%zu\n", ft_strlen("  \t \t \n   \n\n\n\t"));
	printf("%s\n", ft_strtrim("  \t \t \n   \n\n\n\t"));
	printf("%i", atoi("922337203685477581"));
	printf("%lu\n", strlcat(dest,"lorem" , 15));
	printf("%lu\n", ft_strlcat(dest,"lorem" , 15));
	printf("%s\n", dest);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%zu\n", ft_strlen("thx to ntoniolo for this test !"));
	printf("%d\n", isalpha('F'));
	printf("%d\n", ft_isalpha('F'));
	printf("%s\n", strstr(a, b));
	printf("%s\n", ft_strstr(aa, b));
	printf ("%s\n", strrchr(aa, 'a'));
    printf ("%s\n", ft_strrchr(a, 'a'));
	printf ("%s\n", strchr(aa, '\0'));
	printf ("%s\n", ft_strchr(a, '\0'));
	printf("%s\n", strncat(c, a, 2));
    printf("%s\n", ft_strncat(cc, a, 2));
	printf("%s\n", strcat(b, a));
	printf("%s\n", ft_strcat(b, a));
	printf("%d", isalpha('u'));
	printf("%d\n", strcmp("\200", "\200"));
	printf("ft_strcmp: %d\n", ft_strcmp("\200", "\200"));
	p1 = memccpy(buf2, buf1, 'i', 10);
	p2 = ft_memccpy(buf2, buf1, 'i', 10);
	printf("%d\n", memcmp("abc", "abcde", 3));
	printf("%d\n", ft_memcmp("abc", "abcde", 3));
	printf("ft_strncpy: %s\n", ft_strncpy(b, c, 3));
	printf("%s\n", memccpy(a, b, ' ', strlen(b)));
    printf("ft_memccpy: %s\n", ft_memccpy(aa, b, ' ', strlen(b)));
	ft_putchar('d');
	ft_putchar('\n');
	ft_putstr("library");
	ft_putchar('\n');
    printf("ft_strlen: %zu\n", ft_strlen(a));
	printf("ft_memset: %s\n", ft_memset(a, 'i', 3));
	printf("ft_strcpy: %s\n", ft_strcpy(a, b));
    printf("%s\n", strcpy(a, b));
	printf("ft_strdup: %s\n", ft_strdup("function"));
	ft_bzero(a, 3);
	printf("%s\n", a);
	printf("%d\n", ft_atoi(argv[1])); 
	printf("%s\n", memcpy(a, b, 2));
	printf("%s\n", ft_memcpy(a, c, 2)); */
	return(0);
}
