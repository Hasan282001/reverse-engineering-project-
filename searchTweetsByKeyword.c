#include "ahmadHassanA3.h"

//Function 3
int searchTweetsByKeyword(tweet * tweetList){
    tweet *head = tweetList;
    char keyWord [50];
    int numMatches = 0;

    printf("Enter a keyword to search ");
    scanf("%s", keyWord);
    getchar();
    printf("\n");

    while (head!=NULL){
        /*reference for strstr: https://www.tutorialspoint.com/c_standard_library/c_function_strstr.htm
        date accessed: 3/30/2022 */ 
        if (strstr(head->text, keyWord )){
            printf("Match found for '%s': %s wrote: '%s'\n", keyWord, head->user, head->text);
            numMatches = numMatches + 1;
        }

        head = head->next;
    }
    //Error statement if no matches are found
    if (numMatches == 0){
        printf("Match not found for '%s'\n", keyWord);
    }
        
    
    return 0;
}