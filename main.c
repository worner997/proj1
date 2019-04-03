#include <stdio.h>
//Rotation Cipher encryption
int main()  {
char message[25] = , ch; //array and variable
int count, key; 

printf("Enter a message to encrypt:\n");
gets

for(count = 0; message[count] != \0; count++) {
    ch = message[count];
    
    if(ch >= A && ch <= Z){
        ch = ch + 1;
    }
}


  return 0;
}

#include <stdio.h>

int main()
{
   char message[100];
    printf("Enter a message to encrypt:");
    gets(message);
    char character;
    int key, count;
    printf("Enter a key: ");
    scanf("%d", &key);
    
    for(count = 0; message[count] != /0; count++)   {
       character = message[count];
       
        if(character >= A && character <= Z)    {
            character = character + key;
            
        if(character > Z)   {
            character = character - Z + A - 1;
        }
        message[count] = character;
        }
    }
    
    printf("Encrypted message: %s", message);

    return 0;
}
