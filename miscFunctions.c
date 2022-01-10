# include "headerA4.h"

void sortID (tweet ** head, tweet ** tail)      {
        tweet * i;
        tweet * j;
        i = *head;
        int temp;
        char *tmp1 = malloc(sizeof(char));
        char *tmp2 = malloc(sizeof(char));

	// For loop to iterate the nodes the i will be on specific nodes and it will iterate until sort is completed. Note j is ahead of i.

        for (i = *head; i->next != NULL; i = i->next)   {
                for (j = i->next; j != NULL; j = j->next)       {
                        if (i->id > j->id)      {

                                // Swap i id and j id

                                temp = i->id;
                                i->id = j->id;
                                j->id = temp;

                                // Swap i user and j user

                                strcpy(tmp1, i->user);
                                strcpy(i->user, j->user);
                                strcpy(j->user, tmp1);

                                // Swap i text and j text

                                strcpy(tmp2, i->text);
                                strcpy(i->text, j->text);
                                strcpy(j->text, tmp2);
                        }
                }
        }

	free(tmp1);
	free(tmp2);
}

void sortUsername (tweet ** head, tweet ** tail)        {
        tweet * r;
        tweet * s;
        r = *head;
        char temp;
        char *tmp = malloc(sizeof(char));
        char *tmp3 = malloc(sizeof(char));


        for (r = *head; r->next != NULL; r = r->next)   {
                for (s = r->next; s != NULL; s = s->next)       {
                        if (strcmp(r->user, s->user) > 0)      {

                                //Swap i id and j id

                                temp = r->id;
                                r->id = s->id;
                                s->id = temp;

                                // Swap i user and j user

                                strcpy(tmp, r->user);
                                strcpy(r->user, s->user);
                                strcpy(s->user, tmp);

                                // Swap i text and j text

                                strcpy(tmp3, r->text);
                                strcpy(r->text, s->text);
                                strcpy(s->text, tmp3);
                        }
                }
        }
}

void reverse (tweet ** head, tweet ** tail)     {

        // These variables will be used with head

	tweet * prevNode;
        tweet * currNode;
        tweet * nextNode;

        // Defining nodes for head ptr

        prevNode = 0;
        currNode = *head;
        nextNode = *head;

        tail = head;

        while (nextNode != 0)   {
                nextNode = nextNode->next;
                currNode->next = prevNode;
                prevNode = currNode;
                currNode = nextNode;
        }

        *head = prevNode;

}



