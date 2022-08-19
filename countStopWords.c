#include "ahmadHassanA3.h"

//Function 4
void countStopWords(tweet * tweetList){
    tweet *head = tweetList;
    int numStopWords = 0;
    int numTweets = 0;
    char* token = NULL;
    char stopWords[25][10] = {"a","an","and","are","as","at","be","by","for","from","has","he","in","is","it","its","of","on","that","the","to","was","were","will","with"};


    while (head!=NULL){

        token = strtok (head->text, " "); // first token from strtok
        while(token != NULL){ //generating the subsequent tokens

        //loop comparing to see if the current token matches any of the stop words 
         for (int i = 0; i < 24; i++){
              if (strcmp(token, stopWords[i]) == 0){
                  numStopWords = numStopWords + 1;
              }
            }
             
             token = strtok (NULL, " ");
        }
       
        head = head->next; //itterating to next tweet in linked list
        numTweets++; //itterating the number of tweets present in the linked list 
    }
        printf("Across %d tweets, %d stop words were found.\n",numTweets, numStopWords);
}
