#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  int s[n];
  s[0]=a;
  s[1]=b;
  s[2]=c;
  int i;
  for(i=3;i<n;i++)
  {
      s[i]=s[n-1]+s[n-2]+s[n-3];
  }
  int nth=s[n-1];
  return nth;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}