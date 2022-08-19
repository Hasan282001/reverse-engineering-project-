#include "ahmadHassanA3.h"

void deleteTweet(tweet ** tweetList){
 tweet* tweetCounter = *tweetList;
 tweet* temp = *tweetList; // node to delete 
 tweet* node = *tweetList; 
 int tweetToDelete = 0;
 int numTweets = 0;
 
 

 //loop to find the number of tweets present 
 while (tweetCounter != NULL){
    numTweets++;
    tweetCounter = tweetCounter->next;
 }

//asking user which tweet they wish to delete
printf("Currently there are %d tweets.\n", numTweets);
printf("Which tweet do you wish to delete – enter a value between 1 and %d: ", numTweets);
scanf("%d", &tweetToDelete);
printf("\n");
getchar();

//checking to see if user input is valid 
if (tweetToDelete > numTweets){
printf("Invalid entry. Which tweet do you wish to delete – enter a value between 1 and %d: ", numTweets);
scanf("%d", &tweetToDelete);
printf("\n");
getchar();
}

/*reference for some logic used: https://www.programiz.com/dsa/linked-list-operations
        date accessed: 4/3/2022 */

//branch runs only if the first node is to be deleted 
if(tweetToDelete == 1){
    *tweetList = temp->next; //removing the tweet from the linked list 
    free(temp); //freeing associated memory 
    //temp = NULL;
}

//itterating through linked list until desired node is found 
 else{
    for (int i = 1; i < tweetToDelete; i++){
    if(temp->next!=NULL) {
     node = temp; //node is always 1 memory location behind temp
     temp = temp->next; //itterating though linked list
    }
    }
     node->next = temp->next; //removing temp from linked list
     free(temp); //freeming memory for temp
     //temp = NULL;
    
 }

}