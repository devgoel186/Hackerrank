#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    reverse(a, a+n);
    int i=0;
    for(i=0; i<n-1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d", a[i]);
    return 0;
}
