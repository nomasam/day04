#include <unistd.h>
int ft_is_prime(int nb)
{
    int i;

    i = 2;

    if(nb == 1)
    {
        return (0);
    }

    if (nb % i == 0 && i!= nb)
    {
        return (0);
    }
        return (1);
}
/*
int main()
{
  printf("%d", ft_is_prime(17));
  return 0;
}*/
