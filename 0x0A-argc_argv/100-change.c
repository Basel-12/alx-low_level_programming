#include <stdio.h>
#include <stdlib.h>

int main(int argc , char* argv[])
{
	int x;


        if (argc != 2)
        {
                printf("Error\n");
                return 1;
        }
	x = atoi(argv[1]);
        if(x < 0)
                printf("0\n");
        
        else
                printf("%d\n", ((x / 25) + (x % 25) / 10 + (x % 25 % 10) / 5 + (x % 25 % 10 % 5) / 2 + (x % 25 % 10 % 5 % 2) / 1));
        return 0;

}
