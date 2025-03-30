#include <stdio.h>

int main() {
  int numofseconds;
  int hours, minutes, seconds;

  printf("Enter the number of seconds: ");
  scanf("%d", &numofseconds);

  if (numofseconds < 0) {
    printf("The number of seconds cannot be negative");
  } else {
    hours = numofseconds / 3600;

    int remainingseconds = numofseconds % 3600;
    minutes = remainingseconds / 60;
    seconds = remainingseconds % 60;

    printf("%d seconds = %d hours, %d minutes, %d seconds\n",
        numofseconds, hours, minutes, seconds);
  }

  return 0;
}
