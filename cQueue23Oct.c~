#include<stdio.h>
#define SIZE 5

int circular_queue[SIZE];
int front =-1 ,rear =-1;
int value , next;
void nQuee(){
	next = (rear % ( SIZE - 1)) + 1;
	
	if (front==-1 && rear==-1)
	{
		printf("\n add your element : ");
		scanf("%d",&value);
		front=0;
		rear=0;
		circular_queue[rear]=value;
	}
	
	else if (next != front){
     		printf("\n add your element : ");
     		scanf("%d",&n);	
		rear=next;
		circular_queue[rear]=value;
	}
	else{
	        printf("\n circular quee is full");
	}
}

int main() {
    int choice, value;
    

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                traverse();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again\n");
        }
    }
return 0;
}
