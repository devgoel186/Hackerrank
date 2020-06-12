#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    string s3=s1+s2;
    int a = s1.length();
    int b = s2.length();
    printf("%d %d\n", a, b);
    cout << s1+s2 << endl;
    swap(s1[0], s2[0]);
    cout << s1 << " " << s2 << endl;
    return 0;
}