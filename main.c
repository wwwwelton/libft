#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "ANSI-color-codes.h"

#include "libft.h"

int	main(void)
{
	//Part 1 - Libc functions
	printf(BHRED "Part 1 - Libc functions\n" reset);

	//ft_isalpha
	int	i = -128;
	int	check_isalpha_or = 0;
	int	check_isalpha_ft = 0;

	while (i <= 255)
	{
		if (isalpha(i))
			check_isalpha_or++;
		if (ft_isalpha(i))
			check_isalpha_ft++;
		//visual debug
		//printf("OR:%d | FT:%d\n", isalpha(i), ft_isalpha(i));
		i++;
	}
	if (check_isalpha_or == check_isalpha_ft)
		printf(GRN "FT_ISALPHA: [OK]\n" reset);
	else
		printf(RED "FT_ISALPHA: [KO]\n" reset);

	//ft_isdigit
	i = -128;
	int	check_isdigit_or = 0;
	int	check_isdigit_ft = 0;

	while (i <= 255)
	{
		if (isdigit(i))
			check_isdigit_or++;
		if (ft_isdigit(i))
			check_isdigit_ft++;
		//visual debug
		//printf("OR:%d | FT:%d\n", isdigit(i), ft_isdigit(i));
		i++;
	}
	if (check_isdigit_or == check_isdigit_ft)
		printf(GRN "FT_ISDIGIT: [OK]\n" reset);
	else
		printf(RED "FT_ISDIGIT: [KO]\n" reset);

	//ft_isalnum
	i = -128;
	int	check_isalnum_or = 0;
	int	check_isalnum_ft = 0;

	while (i <= 255)
	{
		if (isalnum(i))
			check_isalnum_or++;
		if (ft_isalnum(i))
			check_isalnum_ft++;
		//visual debug
		// printf("OR:%d | FT:%d | i: %d\n", isalnum(i), ft_isalnum(i), i);
		i++;
	}
	if (check_isalnum_or == check_isalnum_ft)
		printf(GRN "FT_ISALNUM: [OK]\n" reset);
	else
		printf(RED "FT_ISALNUM: [KO]\n" reset);

	//ft_isascii
	i = -128;
	int	check_isascii_or = 0;
	int	check_isascii_ft = 0;

	while (i <= 255)
	{
		if (isascii(i))
			check_isascii_or++;
		if (ft_isascii(i))
			check_isascii_ft++;
		//visual debug
		//printf("OR:%d | FT:%d\n", isascii(i), ft_isascii(i));
		i++;
	}
	if (check_isascii_or == check_isascii_ft)
		printf(GRN "FT_ISASCII: [OK]\n" reset);
	else
		printf(RED "FT_ISASCII: [KO]\n" reset);

	//ft_isprint
	i = -128;
	int	check_isprint_or = 0;
	int	check_isprint_ft = 0;

	while (i <= 255)
	{
		if (isprint(i))
			check_isprint_or++;
		if (ft_isprint(i))
			check_isprint_ft++;
		//visual debug
		//printf("OR:%d | FT:%d\n", isprint(i), ft_isprint(i));
		i++;
	}
	if (check_isprint_or == check_isprint_ft)
		printf(GRN "FT_ISPRINT: [OK]\n" reset);
	else
		printf(RED "FT_ISPRINT: [KO]\n" reset);

	//ft_strlen
	if (strlen("") == ft_strlen(""))
		printf(GRN "FT_STRLEN:  [OK]" reset);
	else
		printf(RED "FT_STRLEN:  [KO]" reset);

	if (strlen("Nome") == ft_strlen("Nome"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (strlen("Opnf") == ft_strlen("Opnf"))
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//ft_memset
	char	str_memset[11];

	if (str_memset == ft_memset(str_memset, 'c', 5) && memcmp(str_memset, "ccccc", 5) == 0)
		printf(GRN "FT_MEMSET:  [OK]" reset);
	else
		printf(RED "FT_MEMSET:  [KO]" reset);

	if (str_memset == ft_memset(str_memset, '\n', 6) && memcmp(str_memset, "\n\n\n\n\n\n", 6) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (str_memset == ft_memset(str_memset, '\0', 1) && memcmp(str_memset, "\0", 1) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (str_memset == ft_memset(str_memset, -1, 11))
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//visual debug
	//printf("OR:%s\nFT:%s\n", str_memset_or, str_memset_ft);
	//printf("OR:%s\nFT:%s\n", str_memset_or_e, str_memset_ft_e);

	//ft_bzero
	char	str_bzero_or[11];
	char	str_bzero_ft[11];
	char	str_bzero_or_e[2];
	char	str_bzero_ft_e[2];

	strcpy(str_bzero_or,"npw0FcjYF5");
	strcpy(str_bzero_ft,"npw0FcjYF5");

	strcpy(str_bzero_or_e,"X");
	strcpy(str_bzero_ft_e,"X");

	bzero(str_bzero_or, 10);
	ft_bzero(str_bzero_ft, 10);

	bzero(str_bzero_or_e, 1);
	ft_bzero(str_bzero_ft_e, 1);

	//visual debug
	//printf("OR:%s\nFT:%s\n", str_bzero_or, str_bzero_ft);
	//printf("OR:%s\nFT:%s\n", str_bzero_or_e, str_bzero_ft_e);

	if (strcmp(str_bzero_or, str_bzero_ft) == 0)
		printf(GRN "FT_BZERO:   [OK]" reset);
	else
		printf(RED "FT_BZERO:   [KO]" reset);

	if (strcmp(str_bzero_or_e, str_bzero_ft_e) == 0)
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//ft_memcpy
	char	str_memcpy[11];

	if (str_memcpy == ft_memcpy(str_memcpy, "zyxwvutsrqponmlkjihgfedcba", 14))
		printf(GRN "FT_MEMCPY:  [OK]" reset);
	else
		printf(RED "FT_MEMCPY:  [KO]" reset);

	if (str_memcpy == ft_memcpy(str_memcpy, "zyxwvutst", 0))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_memcpy(NULL, NULL, 3) == NULL)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (str_memcpy == ft_memcpy(str_memcpy, "zy\0xw\0vu\0\0tsr", 11))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	char	str_memcpy_src[17] = { "Lorem Ipsum is s" };

	if (strcmp(str_memcpy_src, "Lorem Ipsum is s" ) == 0)
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//visual debug
	// printf("VAR: %s\n", str_memcpy_src);

	//ft_memmove
	char	str_memmove_or[0xF0];
	char	str_memmove_ft[0xF0];
	char	*str_memmove_data = "Lorem Ipsum is simply dummy text of the printing";
	int		memmove_size = 0xF0 - 0xF;

	memset(str_memmove_or, 'A', sizeof(str_memmove_or));
	memset(str_memmove_ft, 'A', sizeof(str_memmove_ft));

	memcpy(str_memmove_or, str_memmove_data, strlen(str_memmove_data));
	memcpy(str_memmove_ft, str_memmove_data, strlen(str_memmove_data));

	memmove(str_memmove_or + 3, str_memmove_or, memmove_size);
	ft_memmove(str_memmove_ft + 3, str_memmove_ft, memmove_size);

	if (memcmp(str_memmove_or, str_memmove_ft, memmove_size) == 0)
		printf(GRN "FT_MEMMOVE: [OK]" reset);
	else
		printf(RED "FT_MEMMOVE: [KO]" reset);

	char str_memmove_src[] = { "There are many variations of" };
	char str_memmove_dest[50];

	ft_memmove(str_memmove_dest, str_memmove_src, 29);

	if (strcmp(str_memmove_src,"There are many variations of") == 0)
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//visual debug
	// printf("OR:%s\n\nFT:%s\n", str_memmove_or, str_memmove_ft);

	//ft_strlcpy
	const char	str_strlcpy_or_src[21] = { "xGOcndW9M12J81QPzIva" };
	const char	str_strlcpy_ft_src[21] = { "xGOcndW9M12J81QPzIva" };
	char	str_strlcpy_or_dest[11];
	char	str_strlcpy_ft_dest[11];
	size_t	size_strlcpy_or;
	size_t	size_strlcpy_ft;

	size_strlcpy_or = strlcpy(str_strlcpy_or_dest, str_strlcpy_or_src, 9);
	size_strlcpy_ft = ft_strlcpy(str_strlcpy_ft_dest, str_strlcpy_ft_src, 9);

	//visual debug
	// printf("OR:%s\nFT:%s\n", str_strlcpy_or_dest, str_strlcpy_ft_dest);
	// printf("OR:%zu\nFT:%zu\n", size_strlcpy_or, size_strlcpy_ft);

	if (strcmp(str_strlcpy_or_dest, str_strlcpy_ft_dest) == 0)
		printf(GRN "FT_STRLCPY: [OK]" reset);
	else
		printf(RED "FT_STRLCPY: [KO]" reset);

	if (strlcpy(str_strlcpy_or_dest, str_strlcpy_or_src, 0) == ft_strlcpy(str_strlcpy_ft_dest, str_strlcpy_ft_src, 0))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (size_strlcpy_or == size_strlcpy_ft)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (strlcpy(str_strlcpy_or_dest, str_strlcpy_or_src, -1)
	== ft_strlcpy(str_strlcpy_or_dest, str_strlcpy_or_src, -1))
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//visual debug
	// printf("%zu\n", strlcpy(str_strlcpy_or_dest, str_strlcpy_or_src, -1));
	// printf("%zu\n", ft_strlcpy(str_strlcpy_ft_dest, str_strlcpy_ft_src, -1));

	//ft_strlcat
	char	*str_strlcat_or_dest;
	char	*str_strlcat_ft_dest;
	size_t	size_strlcat_or;
	size_t	size_strlcat_ft;

	str_strlcat_or_dest = malloc(sizeof(char) * 15);
	str_strlcat_ft_dest = malloc(sizeof(char) * 15);

	memset(str_strlcat_or_dest, 0, 15);
	memset(str_strlcat_ft_dest, 0, 15);
	size_strlcat_or = strlcat(str_strlcat_or_dest, "lorem", 15);
	size_strlcat_ft = ft_strlcat(str_strlcat_ft_dest, "lorem", 15);
	if (strcmp(str_strlcat_or_dest, str_strlcat_ft_dest) == 0)
		printf(GRN "FT_STRLCAT: [OK]" reset);
	else
		printf(RED "FT_STRLCAT: [KO]" reset);

	memset(str_strlcat_or_dest, 0, 15);
	memset(str_strlcat_ft_dest, 0, 15);
	size_strlcat_or = strlcat(str_strlcat_or_dest, "", 15);
	size_strlcat_ft = ft_strlcat(str_strlcat_ft_dest, "", 15);
	if (strcmp(str_strlcat_or_dest, str_strlcat_ft_dest) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	memset(str_strlcat_or_dest, 0, 15);
	memset(str_strlcat_ft_dest, 0, 15);
	size_strlcat_or = strlcat(str_strlcat_or_dest, "lorem ipsum", 15);
	size_strlcat_ft = ft_strlcat(str_strlcat_ft_dest, "lorem ipsum", 15);
	if (strcmp(str_strlcat_or_dest, str_strlcat_ft_dest) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	memset(str_strlcat_or_dest, 0, 15);
	memset(str_strlcat_ft_dest, 0, 15);
	size_strlcat_or = strlcat(str_strlcat_or_dest, "lorem ipsum dolor sit amet", 15);
	size_strlcat_ft = ft_strlcat(str_strlcat_ft_dest, "lorem ipsum dolor sit amet", 15);
	if (strcmp(str_strlcat_or_dest, str_strlcat_ft_dest) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	memset(str_strlcat_or_dest, 0, 15);
	memset(str_strlcat_ft_dest, 0, 15);
	size_strlcat_or = strlcat(str_strlcat_or_dest, "lorem ipsum dolor sit amet", 0);
	size_strlcat_ft = ft_strlcat(str_strlcat_ft_dest, "lorem ipsum dolor sit amet", 0);
	if (strcmp(str_strlcat_or_dest, str_strlcat_ft_dest) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	memset(str_strlcat_or_dest, 0, 15);
	memset(str_strlcat_ft_dest, 0, 15);
	size_strlcat_or = strlcat(str_strlcat_or_dest, "lorem ipsum dolor sit amet", 1);
	size_strlcat_ft = ft_strlcat(str_strlcat_ft_dest, "lorem ipsum dolor sit amet", 1);
	if (strcmp(str_strlcat_or_dest, str_strlcat_ft_dest) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	memset(str_strlcat_or_dest, 0, 15);
	memset(str_strlcat_ft_dest, 0, 15);
	size_strlcat_or = strlcat(str_strlcat_or_dest, "lorem ipsum dolor sit amet", 5);
	size_strlcat_ft = ft_strlcat(str_strlcat_ft_dest, "lorem ipsum dolor sit amet", 5);
	if (strcmp(str_strlcat_or_dest, str_strlcat_ft_dest) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	memset(str_strlcat_or_dest, 'r', 14);
	memset(str_strlcat_ft_dest, 'r', 14);
	size_strlcat_or = strlcat(str_strlcat_or_dest, "lorem ipsum dolor sit amet", 15);
	size_strlcat_ft = ft_strlcat(str_strlcat_ft_dest, "lorem ipsum dolor sit amet", 15);
	if (strcmp(str_strlcat_or_dest, str_strlcat_ft_dest) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	str_strlcat_or_dest[14] = 'a';
	str_strlcat_ft_dest[14] = 'a';
	size_strlcat_or = strlcat(str_strlcat_or_dest, "lorem ipsum dolor sit amet", 15);
	size_strlcat_ft = ft_strlcat(str_strlcat_ft_dest, "lorem ipsum dolor sit amet", 15);
	if (strcmp(str_strlcat_or_dest, str_strlcat_ft_dest) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	//visual debug
	// printf("OR:%s\nFT:%s\n", str_strlcat_or_dest, str_strlcat_ft_dest);
	// printf("OR:%zu\nFT:%zu\n", size_strlcat_or, size_strlcat_ft);

	strcpy(str_strlcat_or_dest, "Teste");
	strcpy(str_strlcat_ft_dest, "Teste");
	size_strlcat_or = strlcat(str_strlcat_or_dest, "Nome", 5);
	size_strlcat_ft = ft_strlcat(str_strlcat_ft_dest, "Nome", 5);
	if (strcmp(str_strlcat_or_dest, str_strlcat_ft_dest) == 0)
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);


	free(str_strlcat_or_dest);
	free(str_strlcat_ft_dest);



	//ft_toupper
	i = 0;
	int	check_toupper_or = 0;
	int	check_toupper_ft = 0;

	while (i <= 255)
	{
		if (toupper(i) != i)
			check_toupper_or++;
		if (ft_toupper(i) != i)
			check_toupper_ft++;
		//visual debug
		//printf("OR:%d | FT:%d\n", toupper(i), ft_toupper(i));
		// if (toupper(i) != ft_toupper(i))
		// 	printf("OR:%d | FT:%d | i = %d\n", toupper(i), ft_toupper(i), i);
		i++;
	}
	if (check_toupper_or == check_toupper_ft)
		printf(GRN "FT_TOUPPER: [OK]\n" reset);
	else
		printf(RED "FT_TOUPPER: [KO]\n" reset);

	//ft_tolower
	i = 0;
	int	check_tolower_or = 0;
	int	check_tolower_ft = 0;

	while (i <= 255)
	{
		if (tolower(i) != i)
			check_tolower_or++;
		if (ft_tolower(i) != i)
			check_tolower_ft++;
		//visual debug
		// printf("OR:%d | FT:%d\n", tolower(i), ft_tolower(i));
		// if (tolower(i) != ft_tolower(i))
		// 	printf("OR:%d | FT:%d | i = %d\n", tolower(i), ft_tolower(i), i);
		i++;
	}
	if (check_tolower_or == check_tolower_ft)
		printf(GRN "FT_TOLOWER: [OK]\n" reset);
	else
		printf(RED "FT_TOLOWER: [KO]\n" reset);

	//ft_strchr
	char	check_strchr_or[] = { "mIsG8eZyTKgK2kz6btzg" };
	char	check_strchr_ft[] = { "mIsG8eZyTKgK2kz6btzg" };
	char	*check_strchr_or_r;
	char	*check_strchr_ft_r;

	check_strchr_or_r = strchr(check_strchr_or, 'A');
	check_strchr_ft_r = ft_strchr(check_strchr_ft, 'A');

	if (check_strchr_or_r == NULL && check_strchr_ft_r == NULL)
		printf(GRN "FT_STRCHR:  [OK]" reset);
	else
		printf(RED "FT_STRCHR:  [KO]" reset);

	//visual debug
	// printf("\nOR:%p ", check_strchr_or_r);
	// printf("FT:%p\n", check_strchr_ft_r);

	check_strchr_or_r = strchr(check_strchr_or, '\0');
	check_strchr_ft_r = ft_strchr(check_strchr_ft, '\0');

	//visual debug
	// printf("\nOR:%c ", *check_strchr_or_r);
	// printf("FT:%c\n", *check_strchr_ft_r);

	if (*check_strchr_or_r == *check_strchr_ft_r)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	check_strchr_or_r = strchr(check_strchr_or, 'G');
	check_strchr_ft_r = ft_strchr(check_strchr_ft, 'G');

	if (*check_strchr_or_r == *check_strchr_ft_r)
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//ft_strrchr
	char	check_strrchr_or[] = { "mIsG8eZyTKgtzgK2kz6b" };
	char	check_strrchr_ft[] = { "mIsG8eZyTKgtzgK2kz6b" };
	char	*check_strrchr_or_r;
	char	*check_strrchr_ft_r;

	check_strrchr_or_r = strrchr(check_strrchr_or, 'A');
	check_strrchr_ft_r = ft_strrchr(check_strrchr_ft, 'A');

	if (check_strrchr_or_r == NULL && check_strrchr_ft_r == NULL)
		printf(GRN "FT_STRRCHR: [OK]" reset);
	else
		printf(RED "FT_STRRCHR: [KO]" reset);

	//visual debug
	// printf("\nOR:%p ", check_strrchr_or_r);
	// printf("FT:%p\n", check_strrchr_ft_r);

	check_strrchr_or_r = strrchr(check_strrchr_or, '\0');
	check_strrchr_ft_r = ft_strrchr(check_strrchr_ft, '\0');

	//visual debug
	// printf("\nOR:%c ", *check_strrchr_or_r);
	// printf("FT:%c\n", *check_strrchr_ft_r);

	if (*check_strrchr_or_r == *check_strrchr_ft_r)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	check_strrchr_or_r = strrchr(check_strrchr_or, 'g');
	check_strrchr_ft_r = ft_strrchr(check_strrchr_ft, 'g');

	if (*check_strrchr_or_r == *check_strrchr_ft_r)
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//visual debug
	// printf("\nOR:%s ", check_strrchr_or_r);
	// printf("FT:%s\n", check_strrchr_ft_r);

	//ft_strncmp
	if (ft_strncmp("PrzAWztGNNXedA0idZJp", "PrzAWztGNNXedA0idZJp", 20)
	==     strncmp("PrzAWztGNNXedA0idZJp", "PrzAWztGNNXedA0idZJp", 20))
		printf(GRN "FT_STRNCMP: [OK]" reset);
	else
		printf(RED "FT_STRNCMP: [OK]\n" reset);

	if (ft_strncmp("abcdefgh", "abcdwxyz", 4)
	==     strncmp("abcdefgh", "abcdwxyz", 4))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_strncmp("", "", 1)
	==     strncmp("", "", 1))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_strncmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 10)
	&&     strncmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 10))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_strncmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 0)
	==     strncmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 0))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	char strncmp_str[] = { "It is a long established fact that" };

	ft_strncmp(strncmp_str, strncmp_str, 34);

	if (strcmp(strncmp_str, "It is a long established fact that") == 0)
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//visual debug
	// printf("\nOR:%d ", strncmp("abcdefgh", "abcdwxyz", 4));
	// printf("FT:%d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	// printf("OR: It is a long established fact that\n");
	// printf("FT: %s\n", strncmp_str);

	//ft_memchr
	char	check_memchr_or[] = { "mIsG8eZyAKgtzgK2kz6b" };
	char	check_memchr_ft[] = { "mIsG8eZyAKgtzgK2kz6b" };
	char	*check_memchr_or_r;
	char	*check_memchr_ft_r;

	check_memchr_or_r = memchr(check_memchr_or, 'A', 8);
	check_memchr_ft_r = ft_memchr(check_memchr_ft, 'A', 8);

	if (check_memchr_or_r == NULL && check_memchr_ft_r == NULL)
		printf(GRN "FT_MEMCHR:  [OK]" reset);
	else
		printf(RED "FT_MEMCHR:  [KO]" reset);

	//visual debug
	// printf("\nOR:%p ", check_memchr_or_r);
	// printf("FT:%p\n", check_memchr_ft_r);

	check_memchr_or_r = memchr(check_memchr_or, '\0', 21);
	check_memchr_ft_r = ft_memchr(check_memchr_ft, '\0', 21);

	//visual debug
	// printf("\nOR:%c ", *check_memchr_or_r);
	// printf("FT:%c\n", *check_memchr_ft_r);

	if (*check_memchr_or_r == *check_memchr_ft_r)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	check_memchr_or_r = memchr(check_memchr_or, 'A', 10);
	check_memchr_ft_r = ft_memchr(check_memchr_ft, 'A', 10);

	if (*check_memchr_or_r == *check_memchr_ft_r)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	int memchr_tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	check_memchr_or_r = memchr(memchr_tab, -1, 7);
	check_memchr_ft_r = ft_memchr(memchr_tab, -1, 7);

	if (check_memchr_or_r == NULL || check_memchr_ft_r == NULL)
		printf(RED " [KO]" reset);
	else if (*check_memchr_or_r == *check_memchr_ft_r)
		printf(GRN " [OK]" reset);

	char	check_memchr_str[] = { "mIsG8eZyAKgtzgK2kz6b" };
	ft_memchr(memchr_tab, 'b', 20);

	if (strcmp(check_memchr_str, "mIsG8eZyAKgtzgK2kz6b") == 0)
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//visual debug
	//printf("\nOR:%s ", check_memchr_or_r);
	//printf("FT:%s\n", check_memchr_ft_r);
	// printf("OR: mIsG8eZyAKgtzgK2kz6b\n");
	// printf("FT: %s\n", check_memchr_str);

	//ft_memcmp
	if (ft_memcmp("PrzAWztGNNXedA0idZJp", "PrzAWztGNNXedA0idZJp", 20)
	==     memcmp("PrzAWztGNNXedA0idZJp", "PrzAWztGNNXedA0idZJp", 20))
		printf(GRN "FT_MEMCMP:  [OK]" reset);
	else
		printf(RED "FT_MEMCMP:  [OK]\n" reset);

	if (ft_memcmp("", "", 1)
	==     memcmp("", "", 1))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_memcmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 10)
	&&     memcmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 10))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_memcmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 0)
	==     memcmp("ts4EBcHGifQcEIQpQLyH", "0WIVoBkpDEh541LN4zbV", 0))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_memcmp("abcdefghij", "abcdefgxyz", 7)
	==     memcmp("abcdefghij", "abcdefgxyz", 7))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	char	memcmp_str[] = { "traset sheets containing L" };

	ft_memcmp("traset sheets containing L", "traset sheets containing L", 27);

	if (strcmp(memcmp_str, "traset sheets containing L") == 0)
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//visual debug
	// printf("\nOR:%d ", memcmp("abcdefghij", "abcdefgxyz", 7));
	// printf("FT:%d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	// printf("OR: traset sheets containing L\n");
	// printf("FT: %s\n", memcmp_str);

	//ft_strnstr
	char	strnstr_or_big[] = { "paae3fRs6frctbs5thQp" };
	char	strnstr_ft_big[] = { "paae3fRs6frctbs5thQp" };
	char	strnstr_or_little[] = { "mada" };
	char	strnstr_ft_little[] = { "mada" };
	char	*strnstr_or_r;
	char	*strnstr_ft_r;

	strnstr_or_r = strnstr(strnstr_or_big, strnstr_or_little, 4);
	strnstr_ft_r = ft_strnstr(strnstr_ft_big, strnstr_ft_little, 4);

	if (strcmp(strnstr_ft_big, "paae3fRs6frctbs5thQp") == 0)
		printf(GRN "FT_STRNSTR: [OK]" reset);
	else
		printf(RED "FT_STRNSTR: [KO]" reset);

	if (strcmp(strnstr_ft_little, "mada") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (strnstr_or_r == NULL && strnstr_ft_r == NULL)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	strnstr_or_r = strnstr(strnstr_or_big, "thQp", 20);
	strnstr_ft_r = ft_strnstr(strnstr_ft_big, "thQp", 20);

	if (strcmp(strnstr_or_r, strnstr_ft_r) == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	//visual debug
	// printf("\nOR:%s ", strnstr_or_r);
	// printf("FT:%s\n", strnstr_ft_r);

	strnstr_or_r = strnstr(strnstr_or_big, strnstr_or_little, 0);
	strnstr_ft_r = ft_strnstr(strnstr_ft_big, strnstr_ft_little, 0);

	if (strnstr_or_r == NULL && strnstr_ft_r == NULL)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	strnstr_or_r = strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	strnstr_ft_r = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);

	if (strnstr_or_r == NULL && strnstr_ft_r == NULL)
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//visual debug
	// printf("\nOR:%s ", strnstr_or_r);
	// printf("FT:%s\n", strnstr_ft_r);

	//ft_atoi
	if (atoi(" -1234ab567") == ft_atoi(" -1234ab567"))
		printf(GRN "FT_ATOI:    [OK]" reset);
	else
		printf(RED "FT_ATOI:    [KO]" reset);

	if (atoi("12345/1234") == ft_atoi("12345/1234"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi(" -12x34ab567") == ft_atoi(" -12x34ab567"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("2147483647") == ft_atoi("2147483647"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("-2147483648") == ft_atoi("-2147483648"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("99999999999999999999999999") == ft_atoi("99999999999999999999999999"))
		printf(GRN " [OK]" reset);
	else
		printf(YEL " [KO]" reset);

	if (atoi("-99999999999999999999999999") == ft_atoi("-99999999999999999999999999"))
		printf(GRN " [OK]" reset);
	else
		printf(YEL " [KO]" reset);

	if (atoi("+-54") == ft_atoi("+-54"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("-+48") == ft_atoi("-+48"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("--47") == ft_atoi("--47"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("++47") == ft_atoi("++47"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("+47+5") == ft_atoi("+47+5"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("-47-5") == ft_atoi("-47-5"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("\t\n\r\v\fd469 \n") == ft_atoi("\t\n\r\v\fd469 \n"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("\e475") == ft_atoi("\e475"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("\e475") == ft_atoi("\e475"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (atoi("") == ft_atoi(""))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	char atoi_str[] = { "2147483648" };

	ft_atoi(atoi_str);

	if (strcmp(atoi_str, "2147483648") == 0)
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//visual debug
	// printf("\nOR:%d ", atoi("99999999999999999999999999"));
	// printf("FT:%d", ft_atoi("99999999999999999999999999"));
	// printf("\nOR:%d ", atoi("-99999999999999999999999999"));
	// printf("FT:%d\n", ft_atoi("-99999999999999999999999999"));
	// printf("VAR: %s\n", atoi_str);

	//ft_calloc
	char	*calloc_ft;

	calloc_ft = ft_calloc(5, sizeof(char));
	ft_strlcpy(calloc_ft, "ABCD", 5);

	if (ft_strncmp(calloc_ft, "ABCD", 4) == 0)
		printf(GRN "FT_CALLOC:  [OK]\n" reset);
	else
		printf(RED "FT_CALLOC:  [KO]\n" reset);

	//visual debug
	// printf("\nOR:%s\n", calloc_ft);

	free(calloc_ft);

	//ft_strdup
	char	*strdup_ft;

	strdup_ft = ft_strdup("Teste");

	if (strcmp(strdup_ft, "Teste") == 0)
		printf(GRN "FT_STRDUP:  [OK]\n" reset);
	else
		printf(RED "FT_STRDUP:  [KO]\n" reset);

	//visual debug
	// printf("\nOR:%s\n", strdup_ft);

	free(strdup_ft);

	//Part 2 - Additional functions
	printf(BHRED "\nPart 1 - Libc functions\n" reset);

	////////////////////////////////
	//         ft_substr          //
	////////////////////////////////
	char *substr_str = "Apples are round, and apples are juicy.";
	char *res;

	res = ft_substr(substr_str, 0, 6);
	if (strcmp(res, "Apples") == 0)
		printf(GRN "FT_SUBSTR:  [OK]" reset);
	else
		printf(RED "FT_SUBSTR:  [KO]" reset);

	res = ft_substr("tripouille", 1, 1);
	if (strcmp(res, "r") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	res = ft_substr("tripouille", 0, 42000);
	if (strcmp(res, "tripouille") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	res = ft_substr("tripouille", 100, 1);
	if (strcmp(res, "") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	res = ft_substr("1", 42, 42000000);
	if (strcmp(res, "") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	res = ft_substr("42", 0, 0);
	if (strcmp(res, "") == 0)
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (ft_substr(NULL, 5, 100) == NULL)
		printf(GRN " [OK]\n" reset);
	else
		printf(YEL " [KO]\n" reset);

	//visual debug
	// printf("\nRES:%s$\n", ft_substr("", 0, 100));

	free(res);

	////////////////////////////////
	//         ft_strjoin          //
	////////////////////////////////
	char const *strjoin_str_1 = "Apples are round,";      //17 + \0 => 18
	char const *strjoin_str_2 = " and apples are juicy."; //22 + \0 => 23
	char *strjoin_str_res;

	strjoin_str_res = ft_strjoin(strjoin_str_1, strjoin_str_2);
	if (strcmp(strjoin_str_res, "Apples are round, and apples are juicy.") == 0)
		printf(GRN "FT_STRJOIN: [OK]" reset);
	else
		printf(RED "FT_STRJOIN: [KO]" reset);

	if (strjoin_str_res[38] == '.')
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (strjoin_str_res[39] == '\0')
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	strjoin_str_res = ft_strjoin("AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA");
	if (strcmp(strjoin_str_res, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"))
		printf(GRN " [OK]" reset);
	else
		printf(RED " [KO]" reset);

	if (strjoin_str_res[48] == '\0')
		printf(GRN " [OK]\n" reset);
	else
		printf(RED " [KO]\n" reset);

	//visual debug
	// printf("\nRES: $%s$\n", ft_strjoin(strjoin_str_1, strjoin_str_2));
	// printf("\nRES: $%c$\n", strjoin_str_res[38]);
	// printf("\n45 => A: $%c$", strjoin_str_res[45]);
	// printf("\n46 => A: $%c$", strjoin_str_res[46]);
	// printf("\n47 => 0: $%c$\n", strjoin_str_res[47]);
	// printf("\nRES: $AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA$");
	// printf("\nRES: $%s$\n", strjoin_str_res);

	free(strjoin_str_res);

	return (0);
}
