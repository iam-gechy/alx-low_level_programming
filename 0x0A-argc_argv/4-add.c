#include <string.h>

#include <ctype.h>

#include <stdio.h>

#include <stdlib.h>



/**

   * main - prints program name

    * @argc: no of args

     * @argv: pointer to arguments

      *

       * Return: 0 at exit

        */



int main(int argc, char *argv[])

{

		int i, j, add = 0;



			for (i = 1; i < argc; i++)

					{

								for (j = 0; argv[i][j] != '\0'; j++)

											{

															if (!isdigit(argv[i][j]))
																	       	{
																								printf("Error\n");

																												return (1);

																															}

																	}

										add += atoi(argv[i]);

											}



				printf("%d\n", add);



					return (0);

}
