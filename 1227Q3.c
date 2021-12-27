#include <stdio.h>
#include <string.h>

int main()
{
    int input[256];
    char pass[256];
    char output[256];
    int j = 0;
    int a = 0;
    int x = -1;

    while (scanf("%3d", &input[j]))
    {
        if(input[j]==x){
            break;
        }
        j++;
    }
    scanf("%c", pass);
    for (int i = 0; i < strlen(input); i++)
    {
        output[i] = input[i] ^ pass[i];

        if()

        printf("%c ", output[i]);
    }
}
