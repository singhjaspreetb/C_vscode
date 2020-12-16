#include <stdio.h>
int go()

{

static int a;

return a++;

}

void main()

{

 for(go() ; go()<=10;go())

 {

   printf("%d",go());

 }

}