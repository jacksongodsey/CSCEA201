#include <stdio.h>

int main(void) {
    int i, j, current_char, decrypted_int;

    int counter = 0;

    char decrypted_char;

    char decrypted[100];

    char encrypted[10][10] =
{
 {' ','D','Q','Q','K','W','G','[','[','*'},
 {'!','"','#','$','%','&','\'','(',')','*'},
 {'"','\\','$','%','&','\'','(',')','*','+'},
 {'#','S','%','&','\'','(',')','*','+',','},
 {'$','Z','&','\'','(',')','*','+',',','-'},
 {'%','&','\'','(',')','*','+',',','-','.'},
 {'&','\'','N','R','Q','`','^','R','R','/'},
 {'\'','(',')','*','+',',','-','.','/','0'},
 {'Q',']','*','Z','a','a','/','/','0','1'},
 {')','*','+',',','-','.','/','0','1','2'},
};

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            current_char = encrypted[i][j];
            decrypted_int = current_char - (i + j);
            decrypted_char = decrypted_int;
            // the following line introduces an error called stacking smashing. unsure of what that is
            //decrypted[counter] = decrypted_char;
            printf("%c", decrypted_char);
            counter += 1;
           // if (counter == 100) {
           //     printf("\n");
           // }
        }
    }

}
