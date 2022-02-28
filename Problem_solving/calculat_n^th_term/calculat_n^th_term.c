#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  //const int N =n;
   static int s[21], i = 4;
    s[1] = a; s[2] = b; s[3]=c;
    s[i] = s[n-1] + s[n-2] + s[n-3];
    if (i==n)
        return s[i];
    else
    {
        i++;
        find_nth_term(n, a, b, c);

    }
   return 0;     
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}