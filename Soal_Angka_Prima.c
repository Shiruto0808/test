#include <stdio.h>
#include <math.h>

int main() {

    long int number;
    scanf("%ld", &number);

    if (number == 0 || number == 1 || number < 0 || number > 1000000000000000) {
        printf("BUKAN");
        return 0;
    }
    
    if (number > 100000000000000) {
        printf("BUKAN");
        return 0;
    }

    int Prima = 1;  
    for (int mod = 2; mod <= sqrt(number); mod++) {
        if (number % mod == 0) {
            Prima = 0; 
            break;
        }
    }

    if (Prima) {
        printf("PRIMA");
    } else {
        printf("BUKAN");
    }

    return 0;
}
