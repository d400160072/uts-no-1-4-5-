#include <stdio.h>
#include <math.h>

int main () {

	int a,b,c;
	float D;
	float x1, x2;
    printf("Masukan a = ");
    scanf("%d", &a);
    printf("Masukan b = ");
    scanf("%d", &b);
    printf("Masukan c = ");
    scanf("%d", &c);

	if (a==0) {

			printf("Nilai variabel a tidak boleh NOL! %d\n", a);
			return 0;
	} else {

			D = (b*b) - (4*a*c);
			if (D < 0 ) {
					printf("Akar Imajiner %f\n", D);
					return 0;
			} else if (D==0) {
                    x1 = (-b) / (2*a);
                    printf("x1 = %.2f , x1 = x2 \n", x1);
                    return 0;
			} else {
					x1 = ( -b + sqrt(D) ) / (2*a);
					x2 = ( -b - sqrt(D) ) / (2*a);

					printf("variabel a=%d, b=%d, c=%d \n", a, b, c);
					printf("Akar 1, x1 = %.2f \n", x1);
					printf("Akar 2, x2 = %.2f \n", x2);
					return 0;
			}
	}
  return 0;
}
