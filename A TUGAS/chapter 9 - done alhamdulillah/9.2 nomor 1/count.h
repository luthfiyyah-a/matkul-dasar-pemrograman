#include <stdio.h>

/*   
 * Counts the number of times ch occurs in string str.
 * Pre:  Letter ch and string str are defined.
 */   
 int
count(char ch, const char *str)
 {
      int ans;
   
      if (str[0] == '\0')                      /* simple case */
          ans = 0;
      else                /* redefine problem using recursion */
         if (ch == str[0]) /* first character must be counted */
             ans = 1 + count(ch, &str[1]);
         else               /* first character is not counted */
             ans = count(ch, &str[1]);
        
      return (ans);
 }
