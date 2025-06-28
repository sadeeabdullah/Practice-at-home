#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    getchar();
    char a[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = getchar();
        sum += (a[i] - '0');
    }
    printf("%lld", sum);
    return 0;
}