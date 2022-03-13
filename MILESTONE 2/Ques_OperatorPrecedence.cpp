#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int i;
    int *ptr = (int *) malloc(5 * sizeof(int));
 
    for (i=0; i<5; i++)
        *(ptr + i) = i;
 
    printf("%d ", *ptr++);  // 0
    printf("%d ", (*ptr)++);  // 1
    printf("%d ",*ptr);
   /*DOUBT*/ printf("%d ", *(++ptr));  // *(++ptr)  Why answer is 2 and why not 3 ? 
  //  printf("%d ", ++*ptr);
}

// OUTPUT :  0 1 2 2 3

/* The important things to remember for handling such questions are 
1) Prefix ++ and * operators have same precedence and right to left associativity. 
2) Postfix ++ has higher precedence than the above two mentioned operators 
and associativity is from left to right. We can apply the above two rules to guess all
 *ptr++ is treated as *(ptr++) *++ptr is treated as *(++ptr) ++*ptr is treated as ++(*ptr) */