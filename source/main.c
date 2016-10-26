#include "../include/resources.h"

void					usage(const char *file_name)
{
	printf("\n/*  SakiiR ELF Utility   */\n");
	printf("/*  ****** *** *******   */ \n\n");

	printf("[+] Exemple Usage : %s --binary BINARY --imports\n", file_name);
	printf("[>] List BINARY's Imports.\n");
}

int						main(int argc, char **argv)
{
	t_options 			options;

	init_options(&options);
	if (get_options(argc, argv, &options) == RETURN_FAILURE)
	{
		usage(argv[0]);
		return (RETURN_FAILURE);
	}
	dump_options(&options);
	(void)argc;
	(void)argv;
	return (RETURN_SUCCESS);
}
