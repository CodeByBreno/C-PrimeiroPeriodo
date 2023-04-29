#include <stdio.h> 
main() {
int *p, y, x; 
y = 0; 
p = &y; 
x = *p; 
x = 4; 
++(*p); 
x--; 
(*p) += x++; 
printf ("y = %d\n", y); 
}
