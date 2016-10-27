#include "../include/resources.h"

void					usage(const char *file_name)
{
	printf( "\n/*  SakiiR ELF Utility   */\n"
	        "/*  ****** *** *******   */ \n\n"
            "[+] Exemple Usage : %s --binary BINARY --imports\n"
	        "[>] List BINARY's Imports.\n", file_name);
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
