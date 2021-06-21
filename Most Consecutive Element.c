/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int maxconc( int size, int*array)
{
    int elementcount = 1;
    int maxcount = 0;
    int value = 0;
    int x=0;
    int i =0 ;
    if(x < size)
    {
        for( i = x+1; i<size; i++)
        {
            if(array[x] == array[i])
            {
                elementcount++;
                if(elementcount >= maxcount)
                {
                    maxcount = elementcount;
                    value = array[x];
                    x = i;
                }
                
            }
            else
            {
                elementcount = 1;
                x++;
                
            }
            
        }
        
    }
    return value;
    
    
}
int main()
{
    printf("Hello World \n");
    
    int array[10] = {1,1,2,2,3,4,4,4,4,5};
    int result = maxconc(10, array);
    printf("%d ", result);

    return 0;
}
