#include <stdio.h>

int gcd(int m, int n);
int MoreEfficientGcd(int m, int n);

int main(int argc, char const *argv[])
{
    int m, n;

    printf("Birinci sayiyi giriniz: \n");
    scanf("%d", &m);

    printf("ikinci sayiyi giriniz: \n");
    scanf("%d", &n);

    printf("gcd: %d\n", MoreEfficientGcd(m, n));
    return 0;
}

int gcd(int m, int n)
{
    int t;

    // assign t to the minimum
    t = m < n ? m : n;

    //check if both of the remainders are zero
    if (m % t == 0 && n % t == 0)
    {
        return t;
    }
    t--;
}

int MoreEfficientGcd(int m, int n)
{
    while (n != 0) {

        if (m % n == 0) {
            return n;
        }

        n = m % n;        
        m = n;
    }
}