#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

void encrypt(char* plainText, int key) {
    int i;
    int length = strlen(plainText);
    char encryptedText[80];
    for (i = 0; i < length; i++) {
        encryptedText[i] = (plainText[i] + key) % 26 + 'A';
    }
    encryptedText[length] = '\0';
    printf("Encrypted Text: %s\n", encryptedText);
}

void decrypt(char* encryptedText, int key) {
    int i, length = strlen(encryptedText);
    char plainText[80];
    for (i = 0; i < length; i++) {
        plainText[i] = (encryptedText[i] - key + 26) % 26 + 'A';
    }
    plainText[length] = '\0';
    printf("Plain Text: %s\n", plainText);
}

int main() {
    char plainText[100];
    int key;
    printf("Enter plain text: ");
    scanf("%s", plainText);
    printf("Enter key: ");
    scanf("%d", &key);
    encrypt(plainText, key);
    decrypt(plainText, key);
    return 0;
}
