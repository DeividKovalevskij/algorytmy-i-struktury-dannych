#include <stdio.h>
#include <stdlib.h>
int gcd(int a, int b) {
 if (b == 0) return a;
 return gcd(b, a % b);
}
//GCD: Greatest common divisor
//LCM: Least common multiple (NWW)
int lcm(int a, int b) {
 return (a * b) / gcd(a, b);
}
int main(void) {
 int a, b;
 printf("Wpisz pierwsza liczba: ");
 scanf("%d", &a);
 printf("Wpisz druga liczba: ");
 scanf("%d", &b);
 printf("LCM z %d and %d jest %d\n", a, b, lcm(a, b));
 return 0;
}
