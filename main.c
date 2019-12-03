#include <stdio.h>

int main(int argc, char **argv)
{
   //int i, n; ///change
    n=1000;
	printf("Print all values between 0 and 1000, ending with a 7\n");
	
    for(i=1; i<=n; i++)
    {
        if(i%10 == 7)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
