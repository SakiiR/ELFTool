#ifndef RESOURCES_H_
# define RESOURCES_H_

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <libelf.h>

# define RETURN_SUCCESS		(0)
# define RETURN_FAILURE		(1)


/**
 * Command Line Options Structure 
 */
typedef struct				s_options
{
	char					*binary_path;
	char					o_imports; 
}							t_options;

typedef struct				s_option
{
	const char				*name;
	int						(*pop)(char **ptr, t_options *options);
}							t_option;

int							get_options(int argc, char **argv, t_options *options);
void						init_options(t_options *options);
void						dump_options(t_options *options);
int							option_binary(char **ptr, t_options *options);
int							option_imports(char **ptr, t_options *options);

#endif /* !*RESOURCES_H_ */
