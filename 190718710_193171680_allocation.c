#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int memory_allocation;
char request[3];
char process_number[3];
int memory_requested;
char algo[2];

struct Node{
	char process_name[2];
	int size;
	int startMemory;
	int endMemory;
};

int main(int argc, char *argv[]){
	int memory_allocated = atoi(argv[1]);
	printf("Allocated %d bytes of memory\n", memory_allocated);
	struct Node *process_list[100];
	struct Node *process_full[100];
	char input[120];
	struct Node *n;
	n = (struct Node*) malloc(sizeof(struct Node));
	n->startMemory = 0;
	n->size = memory_allocated;
	n->endMemory = memory_allocated - 1;
	printf("allocator>");
	fgets(input, sizeof(input), stdin);
	input[strlen(input) - 1] = '\0';
	
	while(1){
		if (strcmp(input, "RQ") == 0){
			printf("Successfully allocated %d to process %s.\n", memory_requested, process_number);
		}
	}
}




