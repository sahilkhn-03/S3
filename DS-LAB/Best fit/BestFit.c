#include <stdio.h>

void implementBestFit(int blockSize[], int blocks, int processSize[], int processes) {
    int allocation[processes];
    int occupied[blocks];

    // Initialize allocation and occupancy
    for (int i = 0; i < processes; i++) {
        allocation[i] = -1;
    }
    for (int i = 0; i < blocks; i++) {
        occupied[i] = 0;
    }

    // Pick each process and find suitable blocks according to its size
    for (int i = 0; i < processes; i++) {
        int indexPlaced = -1;

        for (int j = 0; j < blocks; j++) {
            if (blockSize[j] >= processSize[i] && !occupied[j]) {
                if (indexPlaced == -1)
                    indexPlaced = j;
                else if (blockSize[j] < blockSize[indexPlaced])
                    indexPlaced = j;
            }
        }

        if (indexPlaced != -1) {
            allocation[i] = indexPlaced;
            occupied[indexPlaced] = 1;
        }
    }

    // Display results
    printf("\nProcess No.\tProcess Size\tBlock No.\n");
    for (int i = 0; i < processes; i++) {
        printf("%d \t\t %d \t\t ", i + 1, processSize[i]);
        if (allocation[i] != -1)
            printf("%d\n", allocation[i] + 1);
        else
            printf("Not Allocated\n");
    }
}

int main() {
    int blockSize[] = {100, 50, 30, 130, 35};
    int blocks = sizeof(blockSize) / sizeof(blockSize[0]);

    // Display available memory blocks
    printf("Available memory blocks:\n");
    for (int i = 0; i < blocks; i++) {
        printf("Block %d: %d\n", i + 1, blockSize[i]);
    }

    // Get user input for process sizes
    int processes;
    printf("\nEnter the number of processes: ");
    scanf("%d", &processes);
    int processSize[processes];

    for (int i = 0; i < processes; i++) {
        printf("Enter size for process %d: ", i + 1);
        scanf("%d", &processSize[i]);
    }

    implementBestFit(blockSize, blocks, processSize, processes);
    return 0;
}
