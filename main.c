#include <stdio.h>
#include <stdlib.h>

struct musicNode{

    char songName[100];
    struct musicNode *prev;
    struct musicNode *next;

};

struct musicNode *head = NULL;

struct musicNode *createNewMusicNode(){

    struct musicNode *temp;
    temp = (struct musicNode *)malloc(sizeof(struct musicNode));

    printf("\nEnter song name:");
    scanf("%s",&temp->songName);
    temp->prev = NULL;
    temp->next = NULL;

    return temp;

};


void insertMusicNodeAtBegin(){

    struct musicNode *temp;
    temp = createNewMusicNode();
    struct musicNode *t;

    if(head == NULL)
        head = temp;

        //printf("\nPlaylist is empty,inserted as first song");
    t = head;

        while(t->prev != NULL)
            t = t->prev;

        t = temp;
        printf("\nSong added successfully at the beginning.");
}


void insertMusicNodeAtEnd(){
    struct musicNode *temp;
    temp = createNewMusicNode();
    struct musicNode *t;

    if(head == NULL)
    {
        head = temp;
        printf("\nPlaylist is empty,inserted as first song");
    }
    else
    {
        t = head;
        while(t->next != NULL)
        {
            t = t->next;
        }
        t->next = temp;
        printf("\nSong added successfully at the end.");
    }
}

void viewPlayListForward(){
    struct musicNode *temp;
    //temp = (struct musicNode *)malloc(sizeof(struct musicNode));

    if(head == NULL)
        printf("\nPlaylist is empty !");

    temp = head;
    while(temp != NULL)
    {
        printf("\nSong Name : %s",temp->songName);
        temp = temp->next;
    }
}

void viewPlayListBackward(){
 struct musicNode *temp,*tracker;

 if(head == NULL)
    printf("\nPlaylist is empty !");

    tracker = head;
    while(tracker->next != NULL){
        tracker = tracker->next;
    }
    temp = tracker;
    while(temp != NULL){
        printf("\nSong Name : %s",temp->songName);
        temp = temp->prev;
    }
}


int main()
{
    int choice;
    do{

        printf("\n1.Insert song at first position\n2.Insert song at last position\n3.View playlist forward\n4.View playlist backward\n5.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice){

            case 1:insertMusicNodeAtBegin();
                   break;
            case 2:insertMusicNodeAtEnd();
                    break;
            case 3:viewPlayListForward();
                    break;
            case 4:viewPlayListBackward();
                    break;
            case 5:exit(0);

            default:printf("\nEnter valid choice !");
        }

    }while(choice <6);
    return 0;
}
