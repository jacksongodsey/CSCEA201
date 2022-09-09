#include <stdio.h>

int main() {

  long long int num1_add, num2_add, num1_multi, num2_multi, final = 0;
  char userchoice = 'l';

  while (userchoice != 'q') {

    printf("Select from the following menu.\n");
    printf("a. Add\n");
    printf("b. Multiply\n");
    printf("q. Quit\n");
    scanf("%s", &userchoice);

    switch (userchoice) {
    case 'a':
      printf("Enter two integers to add, seperated by whitespace.\n");
      scanf("%lld %lld", &num1_add, &num2_add);
      final = num1_add + num2_add;
      printf("The sum is %lld\n\n", final);
      userchoice = 'l';
      break;
    case 'b':
      printf("Enter two integers to multiply, seperated by whitespace.\n");
      scanf("%lld %lld", &num1_multi, &num2_multi);
      final = num1_multi * num2_multi;
      printf("The product is %lld\n\n", final);
      userchoice = 'l';
      break;
    case 'q':
      break;
    default:
      printf("Error. Please enter a proper response from the menu.\n\n");
      break;
    }
  }
  printf("\nGoodbye.\n");
  return 0;
}
