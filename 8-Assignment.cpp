#include <stdio.h>
#include <string.h>


void phonenoValidation(char x[15]);

int main()
{
    char mobile[15];
    phonenoValidation(mobile);
    printf("%s\n\n\n", mobile);
    return 0;
}


void phonenoValidation(char x[15]){
    char input[15];
    long int num = -1;
    char *cp, ch;
    int n;
    printf("Please enter a valid mobile number:");
    while(num<0){
        cp = fgets(input, sizeof(input), stdin);
        if (cp == input) {
            n = sscanf(input, "%ld %c", &num, &ch);
            if (n!=1) {printf("ERROR! Please enter a valid mobile number:");
                num = -1;
            }
            else if (num<0)
                printf("ERROR! Please enter a valid mobile number:");
            else if ((strlen(input)-1)>11 || (strlen(input)-1)<11 || strncmp(&input[0], "0", 1) != 0){
                printf("ERROR! Please enter a valid mobile number:");
                num = -1;
            }
        }
    }

    long int i;
    i = strlen(input);
    //Because when I try to print it out it prints a line after number.
    strcpy(&input[i-1], "");
    strcpy(x, input);

}
