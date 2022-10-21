#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"

typedef struct Node {
    int isQuestion;
    char leftPreference[50];
    char rightPreference[50];
    struct Node* leftPtr;
    struct Node* rightPtr;
    char infoText[50];
} Node;

int main() {
    

    Node mowhawk_supervillian;
    Node flat_top;
    Node pompadour;
    Node steak_or_sushi;

    Node start;
    start.isQuestion = 1;
    strcpy(start.leftPreference, "Superhero");
    strcpy(start.rightPreference, "Supervillian");
    start.leftPtr = &steak_or_sushi;
    start.rightPtr = &mowhawk_supervillian;
    strcpy(start.infoText, "This is a test.");
    
    //setting up the mowhawk node
    mowhawk_supervillian.isQuestion = 0;
    strcpy(mowhawk_supervillian.infoText, "You should get a mowhawk!");
    
    //setting up the flat top node
    flat_top.isQuestion = 0;
    strcpy(flat_top.infoText, "You should get a flat top!");

    //setting up the pompadour node
    pompadour.isQuestion = 0;
    strcpy(pompadour.infoText, "You should get a pompadour!");

    //setting up the stake or sushi node
    steak_or_sushi.isQuestion = 1;
    strcpy(steak_or_sushi.leftPreference, "Steak");
    strcpy(steak_or_sushi.rightPreference, "Sushi");
    steak_or_sushi.leftPtr = &flat_top;
    steak_or_sushi.rightPtr = &pompadour;
    strcpy(steak_or_sushi.infoText, "This is a test");
    
    Node* current = &start;
    int finished = 0;
    do {
        if (current->isQuestion) {
            printf("Choose:\n"); 
            printf("1) %s, or\n", current->leftPreference);
            printf("2) %s\n", current->rightPreference);
            int choice;
            scanf("%d", &choice);
            if (choice == 1) {
                current = current->leftPtr;
            } else if (choice == 2) {
                current = current->rightPtr;
            }
            printf("\n");
        }
        else {
            finished = 1;
            printf("%s\n", current->infoText);
        }
    } while (!finished);
}