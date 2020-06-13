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
    vector <int> v(n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }
    int er1, er2, er3;
    scanf("%d", &er1);
    v.erase(v.begin()+er1-1);
    scanf("%d%d", &er2, &er3);
    v.erase(v.begin()+er2-1, v.begin()+er3-1);
    printf("%d\n", v.size());
    for(int i=0; i<v.size(); i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}
