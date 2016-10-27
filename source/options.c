#include "../include/resources.h"

const t_option 		g_options[] = {
    {"--binary", &option_binary},
    {"--imports", &option_imports},
    {"--rop", &option_rop},
    {"--strings", &option_strings},
    {NULL, NULL}
};

void				dump_options(t_options *options)
{
    printf("options->binary_path      : %s\n", options->binary_path);
    printf("options->o_all[O_IMPORTS] : %d\n", options->o_all[O_IMPORTS]);
    printf("options->o_all[O_ROP]     : %d\n", options->o_all[O_ROP]);
    printf("options->o_all[O_STRINGS] : %d\n", options->o_all[O_STRINGS]);
}

void				init_options(t_options *options)
{
    int             i;

    for (i = 0 ; i < MAX_OPT ; ++i)
        options->o_all[i] = 0;
    options->binary_path = NULL;

}

static int          check_options(t_options *options)
{
    if (options->binary_path == NULL)
    {
        printf("[>] You Should Provide Your Binary Path\n");
        return (RETURN_FAILURE);
    }
    return (RETURN_SUCCESS);
}

int					get_options(int argc, char **argv, t_options *options)
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
    return (check_options(options));
}
