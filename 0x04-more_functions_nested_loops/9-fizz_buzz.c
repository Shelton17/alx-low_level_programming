#include <stdio.h>

void fizzbuzz()
{
    for ( int i = 1; i < 101; i++)
    {
        /* code */
        if (i % 3 == 0 && i % 5 != 0)
        {
            /* code */
            printf("Fizz ");
        }else if (i % 5 == 0 && i % 3 != 0)
        {
            /* code */
            printf("Buzz ");
        }else if (i % 5 == 0 && i % 3 == 0)
        {
            /* code */
            printf("FizzBuzz ");
        }else
        {
            /* code */
            printf("%d ", i);
        }

        
        

    }
        
 }

int main ()
{
    fizzbuzz();
}
