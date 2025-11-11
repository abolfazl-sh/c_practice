#include <stdio.h>

int main() {
    int fahr, celsius;
    int low = 0;
    int high = 200;
    
    fahr = low;
    while (fahr <= high){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + 20;
    }
    return 0;
    
}
