#include <stdio.h>

int main () {
   int t;

   scanf("%d", &t);

   while (t--) {
      int j, n, k, x, count;

      scanf("%d%d", &n, &k);

      j = count = 0;

      while (j < n) {
         scanf("%d", &x);

         if (x%2 == 0)
            ++count;
         ++j;
      }

      if (k == 0 && count == n)
         count = -1;

      if (count >= k)
         printf("YES\n");
      else
         printf("NO\n");
   }

   return 0;
}
