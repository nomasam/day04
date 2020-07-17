#include <unistd.h>

int  ft_sqrt(int nb)
{
    int i=1;
    while (i < nb)
    {
        if (i * i == nb)
        {
            return (i);
        }
        i++;
    }
    return 0;
}
/*
int main()
{
  printf("%d", ft_sqrt(12));
  return 0;
}*/
