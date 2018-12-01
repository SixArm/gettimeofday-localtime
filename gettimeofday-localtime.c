/**
 * Print the current time by using system commands.
 * This calls gettimeofday(2) then localtime(3).
 */ 
#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

int main(){
  struct timeval tv;
  struct tm* ptm;
  char s[40];
  gettimeofday(&tv, NULL);
  ptm = localtime (&tv.tv_sec);
  strftime (s, sizeof(s), "%Y-%m-%d %H:%M:%S", ptm);
  printf ("%s\n", s);
}
