#include <stdio.h>


int main() {

  int c;
  s0:  /* Stan s0 */
  if((c=getchar()) != EOF) {
    switch (c) {
      case 'a': goto s1;
      case 'b': goto s3;
      default:
        puts ("Incorrect input!");
        exit(-1);
    }
  } else {
    puts("Error");
    return 0;
  }

s1:  /* Stan s1 */
  if((c=getchar()) != EOF) {
    switch (c) {
      case 'a': goto s2;
      case 'b': goto s1;
      default:
        puts ("Incorrect input!");
        exit(-1);
    }
  } else {
    puts("Error");
    return 0;
  }
s2:  /* Stan s2 */
  if((c=getchar()) != EOF) {
    switch (c) {
      case 'a': goto s3;
      case 'b': goto s3;
      default:
        puts ("Incorrect input!");
        exit(-1);
    }
  } else {
    puts("Succes");
    return 0;
  }
s3:  /* Stan s2 */
  if((c=getchar()) != EOF) {
    switch (c) {
      case 'a': goto s3;
      case 'b': goto s3;
      default:
        puts ("Incorrect input!");
        exit(-1);
    }
  } else {
    puts("Error");
    return 0;
  }


}
