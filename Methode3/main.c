#include <stdio.h>
#include "demo.h"

int main(){
printf("%d + %d = %d\n", 4, 3, sum(4, 3));
printf("%d - %d = %d\n", 4, 3, sub(4, 3));
printf("%.2f / %.2f = %.2f\n",10.4, 5.2, divide(10.4, 5.2));
printf("%d * %d = %d\n", 4, 3, prod(4, 3));

return 0;

}