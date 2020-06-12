#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n1, n2, a;
    scanf("%d%d", &n1, &n2);
    vector <vector <int>> v;
    for(int i=0; i<n1; i++)
    {
        scanf("%d", &a);
        vector <int> v1(a);
        vector <int> ::  iterator j;
        for(j=v1.begin(); j!=v1.end(); j++)
        {
            scanf("%d", j);
        }
        v.push_back(v1);
    }
    int f,g;
    for(int i=0; i<n2; i++)
    {
        scanf("%d%d", &f, &g);
        printf("%d\n", v[f][g]);
    }
    return 0;
}
