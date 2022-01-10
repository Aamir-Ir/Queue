# include "headerA4.h"

void enqueue (tweet ** head, tweet ** tail, tweet * node)       {
        int i;
        int sum = 0;
        int userId;
        node = malloc(sizeof(tweet));

        // Option 1 creation of user

        printf("Enter a username:\n");
        //getc(stdin);
        fgets(node->user, sizeof(node->user), stdin);
        printf("Enter the user's tweet:\n");
        fgets(node->text, sizeof(node->text), stdin);

        for (i = 0; i <= strlen(node->user); ++i)       {
                if (node->user[i] == '\n')      {
                        node->user[i] = '\0';
                }
        }

        // Determining user ID

        for (i = 0; i < strlen(node->user) - 1; ++i)       {
                sum += node->user[i];
        }

        userId = sum + strlen(node->text) - 1;
        node->id = userId;

        printf("Your computer-generated useid is %d\n", userId);

        if ((*head == NULL) && (*tail == NULL)) {
                *head = node;
                *tail = node;
        }
        else    {
                (*tail)->next = node;
                *tail = node;
        }
}


void dequeue (tweet ** head, tweet ** tail)     {
        tweet * temp = *head;

        if ((*head == NULL) && (*tail == NULL)) {
                printf("The Queue is empty\n");
        }
        else    {
                *head = (*head)->next;
                free(temp);
        }
}


int isEmpty (tweet * head)      {
        if (head == NULL)       {
                return 1;
        }
        else    {
                return 0;
        }
}

void printQueue (tweet * head)  {

        if (head == NULL)       {
                printf("Queue is empty\n");
        }
        else    {
                while (head != NULL)    {
                        printf("%d: Created by %s: %s\n", head->id, head->user, head->text);
                        head = head->next;
                }
        }

}


