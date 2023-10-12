#include <stdio.h>

int primeNumber(int num)
{
    int i=2;
    while(num/2 >= i)
    {
        if(num%i == 0)
            return 0;
        else
            i++;
    }
    return 1;
}

int main()
{
    int num;
    printf("Input an Integer for prime control: ");
    scanf("%d", &num);

    int prime;
    prime = primeNumber(num);

    if(prime == 1)
        printf("%d is a prime number.", num);
    else if(prime == 0)
        printf("%d is not a prime number.", num);

    return 0;
}
