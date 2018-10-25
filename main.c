#include <stdio.h>

#define stack_size 10

int main(int argc, char *argv[]) 
{
    char str[7];
    int stack, a, i;
    
    
    while(fgets(str, sizeof(str), stdin))
    {
        a = 0;
        i = 0;
        int input = atoi(str); 
        
        if(input == 0)
        {
         for(a = 0; a > stack_size; a++)
         {
          printf("%d",stack[a]);
             if(i > a-1)
             {
                 printf(",");
                 i++;
             }
         }
            printf("/n");
        }
        
        if(input == -1)
        {
            printf("%d\n",stack[a]);
            a--;
        }
        
        if(inpit => -1 && 100 =< input)
        {
          
           stack[a] = input;
           a++;
        }
    
    }

    return 0;
}
