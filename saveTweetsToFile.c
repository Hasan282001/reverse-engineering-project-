#include "ahmadHassanA3.h"
void saveTweetsToFile(tweet * tweetList){
char fileName [100];
tweet *head = tweetList;
FILE* outFile = NULL;

//getting fileName from user
printf("Enter the filename where you would like to store your tweets: ");
scanf("%s", fileName);
printf("\n");
getchar();

// opening a file
outFile = fopen(fileName, "w");
if (outFile == NULL){
    return;
}

// writing in file 
while(head != NULL){
        fprintf(outFile, "%d, ", head->id);
        fprintf(outFile, "%s, ", head->user);
        fprintf(outFile, "%s\n", head->text);
        head = head->next;
    }


//Closing File
fclose(outFile);

printf("Output successful!\n");
}