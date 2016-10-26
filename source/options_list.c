#include "resources.h"

int					option_binary(char **ptr, t_options *options)
{
	if ((!ptr) || !(*(ptr + 1)))
	{
		printf("[>] Failed to get --binary option\n");
		return (RETURN_FAILURE);
	}
	options->binary_path = *(ptr + 1);
	return (RETURN_SUCCESS);
}

int					option_imports(char **ptr, t_options *options)
{
	(void)ptr;
	options->o_imports = 1;
	return (RETURN_SUCCESS);
}
