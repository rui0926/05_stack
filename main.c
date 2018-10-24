#include <stdio.h>

#define stack_size 10

int main(int argc, char *argv[]) 
{
    char str[7];
    int array[100];
    int stack, a;
    
    
    while(fgets(str, sizeof(str), stdin))
    {
        a = 0;
        int input = atoi(str); 
        
        if(input == 0)
        {
         for(a = 0; a > stack_size; a++)
         {
          printf("%d",stack[a]);
             if(i > a-1)
             {
                 printf(",");
             }
         }
            printf("/n");
        }
        
        else if(input == -1)
        {
            printf("%d\n",stack[a]);
            a--;
        }
        
        else
        {
           stack[stack_size] = input;
           a++;
        }
    
    }

    return 0;
}
