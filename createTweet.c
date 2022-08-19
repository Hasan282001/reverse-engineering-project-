#include "ahmadHassanA3.h"

//Function 1
tweet * createTweet( tweet * tweetList){
int ID_length;
int tweetLength;
int userId = 0;
tweet* current = malloc(sizeof(tweet));



//print statments
printf("Enter a username: ");
fgets(current->user, 51, stdin);
printf("\n");
printf("Enter user's tweet: ");
fgets(current->text, 151, stdin);
printf("\n");

//replacing the newline with a null character in all user entered data
ID_length = strlen(current->user) -1;
tweetLength = strlen(current->text) -1; 

//replacing newline with null char in user entered ID 
current->user[ID_length] = '\0';
        
//replacing newline with null char in user entered tweet 
current->text[tweetLength] = '\0';
    

//determining user id
for (int i = 0; i < ID_length; i++){
 userId = userId + (current->user[i]);
}
userId = userId + (strlen(current->text)-1); // -1 accounts for the null character 

printf("Your computer-generated userid is %d\n",userId);

current->id = userId; 
current->next = NULL; //to ensure that this node is the only node in the list

return current;
}

//Function to add node to list
void addNodeToList(tweet**tweetList,tweet * node){
    tweet* head = *tweetList; //head points to the adress of tweetList (so it can chnage the elements in the tweetList)
    //checking if the current node is the first and only node in the linked list
    if (*tweetList == NULL){
        *tweetList = node;
        return;
    }
    //finding an empty space for the new node if the linked list is full
    
    while ( head->next != NULL){ 
        head = head->next;
    }
    head->next = node; //adding the new node to the empty adress found in the while loop above (this is at the same adress as tweetList's next empty position)

}



