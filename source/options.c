#include <resources.h>

const t_option 		g_options[] = {
	{"--binary", &option_binary},
	{"--imports", &option_imports},
	{NULL, NULL}
};

void				dump_options(t_options *options)
{
	printf("options->binary_path : %s\n", options->binary_path);
	printf("options->o_imports : %d\n", options->o_imports);
}

int					get_options(int argc,
								char **argv,
								t_options *options)
{
	int				i = 0;
	int				j;

	while (++i < argc)
	{
		j = -1;
		while (g_options[++j].name)
		{
			if (strcmp(g_options[j].name, argv[i]) == 0)
			{
				if (g_options[j].pop(&argv[i], options) == RETURN_FAILURE)
					return (RETURN_FAILURE);
			}
		}
	}
	return (RETURN_SUCCESS);
}
