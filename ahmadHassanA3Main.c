#include "ahmadHassanA3.h"
/* 
  Student Name: Hassan Ahmad
  Student ID: 1095531 
  Due Date: April 3, 2022 
  Course: CIS*2500 
 
  I have exclusive control over this submission via my password. 
  By including this header comment, I certify that: 
   1) I have read and understood the policy on academic integrity. 
   2) I have completed Moodle's module on academic integrity. 
   3) I have achieved at least 80% on the academic integrity quiz 
  I assert that this work is my own. I have appropriate acknowledged 
  any and all material that I have used, be it directly quoted or 
  paraphrased. Furthermore, I certify that this assignment was written 
  by me in its entirety. 
*/ 

int main (){
tweet *tweetList = NULL; //initializing tweetList to NULL
tweet *returnVal; //stores the data entered in function 1
tweet *head = tweetList; //used in the sortID function 
int menueOption = 0; 

//loop running menue options
while(menueOption != 9){

    printf("Choose a menu option: ");
    scanf("%d", &menueOption);
    printf("\n");
    getchar();

    //ensuring menue option is between 1-9
    if (!((menueOption >= 1)&&(menueOption<=9))){
    printf("Invalid entry. Please choose a number between 1 and 9: ");
    scanf("%d", &menueOption);
    printf("\n");
    getchar();
    }

    if (menueOption == 1){
        returnVal = createTweet(tweetList);
        addNodeToList(&tweetList, returnVal); //passes the node made in fuction 1 and the adress of tweetList to the function
    }
    else if (menueOption == 2){
        displayTweets(tweetList);
    }
    else if (menueOption == 3){
        searchTweetsByKeyword(tweetList);
    }
    else if (menueOption == 4){
        countStopWords(tweetList);
    }
    else if (menueOption == 5){
        deleteTweet(&tweetList);
    }
    else if (menueOption == 6){
        saveTweetsToFile(tweetList);
    }
    else if (menueOption == 7){
        loadTweetsFromFile(&tweetList);
    }
    else if (menueOption == 8){
        sortID(&head);
    }
}

if (menueOption == 9){
    return 0;
}
    return 0;
}


