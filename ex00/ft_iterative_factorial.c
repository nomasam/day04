1
#include <unistd.h>



int ft_iterative_factorial(int nb)
{
  
int fact;
int i;

fact = 1;
i = 1;
  
  if (nb < 0 )
  {
    return (0);
  }
  if (nb <= 1)
  {
    fact = 1;
    return (fact);
  }
  
  else
  {
    while(i <= nb)
    {
      fact = (fact * i);
      i++;
    }
    return (fact);
  }
}



