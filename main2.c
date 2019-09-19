#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    
	float radius, area;
    
	radius = 10.0;
    
	area = 3.14 * radius * radius;
    
	printf("원의 면적 : %f\n",area);
    
	return 0;
}
