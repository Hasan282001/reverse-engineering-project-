#include "ahmadHassanA3.h"

//Function 2
void displayTweets(tweet * tweetList){
tweet *printVar = tweetList;
 while ( printVar != NULL){ 
        printf("<%d>: Created by <%s>: <%s>\n",printVar->id, printVar->user, printVar->text);
        printVar = printVar->next;
    }
}