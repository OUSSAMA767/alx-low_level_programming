#include "main.h"
#include <stdlib.h>
/*create_array
@size: size of array
@c: character to store in array
Return: pointer to the array
creates array*/

/**
 * Prototype for copy_strings_to_buffer
 */
int copy_strings_to_buffer(char *dest, char **src, int count);

/**
 * argstostr - concatenate an array of strings into a single string
 * @ac: number of strings
 * @av: array of strings
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
int i, n, r = 0, l = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);
/* Calculate the total length needed for the concatenated string*/
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
l++;
}
/* Add space for newline characters and a null terminator*/
l += ac;
/* Allocate memory for the concatenated string*/
str = malloc(sizeof(char) * (l + 1));

if (str == NULL)
return (NULL);

r = copy_strings_to_buffer(str, av, ac);

if (r == -1)
{
free(str);
return (NULL);
}

return (str);
}

/**
 * copy_strings_to_buffer - copy strings to the buffer
 * @dest: destination buffer
 * @src: source array of strings
 * @count: number of strings
 * Return: 0 on success, -1 on failure
 */
int copy_strings_to_buffer(char *dest, char **src, int count)
{
int i, j, k;

k = 0;

for (i = 0; i < count; i++)
{
for (j = 0; src[i][j]; j++)
{
dest[k] = src[i][j];
k++;
}
/* Add newline character after each string*/
dest[k] = '\n';
k++;
}
/* Null-terminate the concatenated string*/
dest[k] = '\0';

return (0);
}
