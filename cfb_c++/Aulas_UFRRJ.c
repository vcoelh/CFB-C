/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <stdio.h>

int
main ()
{
  FILE *arquivo;		// criando um ponteiro do tipo FILE

  arquivo = fopen ("meuarquivo.txt", "w");	// abrindo o arquivo no tipo "w" -write, escrever-

  if (arquivo == NULL)
    {				// verificando se o arquivo esta vazio
      printf ("Erro ao abrir o arquivo\n");
      return 1;
    }

  fprintf (arquivo, "Victor Francisco Coelho");

  fclose (arquivo);

  return 0;

}
