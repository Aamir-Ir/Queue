# include "headerA4.h"

int main()      {
	int num, input;
        tweet * node = malloc(sizeof(tweet));
	tweet * head = NULL;
	tweet * tail = NULL;

	printf("Begenning A4 program testing...\n");
	printf("Creating intital queue list...\n");

	// Creation for the intial queue

	for (int i = 0; i < 5; ++i)	{
		enqueue(&head, &tail, node);
	}

	// print the intial queue

	printf("Verifying queue contents via printQueue\n");
	printQueue(head);

	// User input the menue will be displayed and user can pick accordingly

	userOne(&head, &tail, node);
	userTwo(&head, &tail, node);
	userThree(&head, &tail, node);

	printf("1. Display tweets or nodes in Queue\n");
        printf("2. Removing a tweet/testcase/node\n");
        printf("3. Check if queue is empty\n");
	printf("4. Sort by Id\n");
        printf("5. Sort by username\n");
        printf("6. Reverse queue\n");
	printf("7. Exit\n");
        printf("Choose a menu option:\n");
        scanf("%d", &input);

	// While loop to run whole program until user exits (the functions are called on by choices and the choices give an idea to which functions are being tested

	while (input != 7)      {
                if ((input == 1) || (input == 2) || (input == 3) || (input == 4) || (input == 5) || (input == 6))	{

			// After all function call printQueue will be run to verify contents

			if (input == 1) {
                                printQueue(head);
                        }
			else if (input == 2)	{
				dequeue(&head, &tail);
				printQueue(head);
			}
			else if (input == 3)	{
				num = isEmpty(head);
			        if (num == 0)	{
					printf("SUCCESS: list is not empty\n");
				}
				else	{
					printf("SUCCESS: empty list is declared as empty\n");
				}
				printQueue(head);
			}
			else if (input == 4)	{
				sortID(&head, &tail);
				printQueue(head);
			}
			else if (input == 5)    {
                                sortUsername (&head, &tail);
                                printQueue(head);
                        }
			else if (input == 6)	{
				reverse(&head, &tail);
				printQueue(head);
			}

			// Ask for user input again

                        printf("1. Display tweets or nodes in Queue\n");
                        printf("2. Remove a tweet/testcase/node\n");
                        printf("3. Check if queue is empty\n");
                        printf("4. Sort by Id\n");
                        printf("5. Sort by username\n");
                        printf("6. Reverse queue\n");
                        printf("7. Exit\n");
                        printf("Choose a menu option:\n");
                        scanf("%d", &input);
                }
                else    {

			// Error check

                        printf("An invalid entry has been entered into the menu please try again\n");
                        printf("1. Display tweets or nodes in Queue\n");
                        printf("2. Remove a tweet/testcase/node\n");
                        printf("3. Check if queue is empty\n");
                        printf("4. Sort by Id\n");
                        printf("5. Sort by username\n");
                        printf("6. Reverse queue\n");
                        printf("7. Exit\n");
                        printf("Choose a menu option:\n");
                        scanf("%d", &input);
                }
        }

	free(node);

	return 0;
}
