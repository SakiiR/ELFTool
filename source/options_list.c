#include "../include/resources.h"

int                     option_binary(char **ptr, t_options *options)
{
    if ((!ptr) || !(*(ptr + 1)))
    {
        printf("[>] Failed to get --binary option\n");
        return (RETURN_FAILURE);
    }
    options->binary_path = *(ptr + 1);
    return (RETURN_SUCCESS);
}

int					    option_imports(char **ptr, t_options *options)
{
    (void)ptr;
    options->o_all[O_IMPORTS] = 1;
    return (RETURN_SUCCESS);
}

int                     option_rop(char **ptr, t_options *options)
{
    (void)ptr;
    options->o_all[O_ROP] = 1;
    return (RETURN_SUCCESS);
}

int                     option_strings(char **ptr, t_options *options)
{
    (void)ptr;
    options->o_all[O_STRINGS] = 1;
    return (RETURN_SUCCESS);
}
