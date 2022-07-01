#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects the correct function
 * @s: operator passed as an argument
 *
 * Return: integer value
 */

int (*get_op_func(char *s))(int, int)
{
	  op_t ops[] = {
		  {"+", op_add},
		  {"-", op_sub},
		  {"*", op_mul},
		  {"/", op_div},
		  {"%", op_mod},
		  {NULL, NULL}
	  };
	  int i;

	  while (ops[i].op != NULL)
	  {
		  if (s[0] == ops[i].op[0])
			  return (ops[i].f);

		  i++;
	  }

	  return (NULL);


}
