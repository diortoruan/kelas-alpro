#include <stdio.h>
// Fungsi untuk menghitung GCD
int gcd (int a, int b){
    if (b == 0)
    return a;
    return  gcd(b, a % b);
}

int main() {
    int num1, num2;

    printf("Masukkan dua bilangan bulat: ");
    scanf("%d %d", &num1, &num2);

    int result = gcd(num1,num2);
     
    printf("GCD dari %d dan %d adalah %d\n", num1, num2, result);

return 0 
}
