/* The idea of this program is to handle any possible grid that we can obtain after
reading the file.
After we process the grid we have to transfer some data to the next step
Main assumptions of this step:
1) The grid is ok.
2) A matrix 4x4 is received after the previous step
 */
#include <stdio.h>

int *kek_func(int *kek)
{
  int i = 0;
    while (i <= 1)
    {
      kek[i] = 100;
      i++;
    }
  return (kek);
}

int main()
{
  int kek[2] = {0, 0};
  int *haha = kek_func(&kek);
  int  i = 0;
    while (i <= 1)
      printf("%d", haha[i++]);

}
