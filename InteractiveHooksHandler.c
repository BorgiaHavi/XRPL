#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
EMSCRIPTEN_KEEPALIVE
#endif
/*Function to create Interactive Hooks*/
int doubler(char *i1)
{
  int ans = 1;
  if (strcmp(i1, ""))
  {
    ans = 10;
  }
  return ans;
}