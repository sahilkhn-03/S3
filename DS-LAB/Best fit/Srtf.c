#include <stdio.h>

int main() {
    int n, at[10], bt[10], ct[10], wt[10], temp[10], tat[10], pr[10], smallest, count = 0, time;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter AT, BT, Priority:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &at[i], &bt[i], &pr[i]);
        temp[i] = bt[i];  // Save original burst time for later WT calculation
    }

    // Main scheduling logic
    for (time = 0; count != n; time++) {
        smallest = -1;

        // Find the process with the highest priority (lowest priority number)
        for (int i = 0; i < n; i++) {
            if (at[i] <= time && bt[i] > 0) {
                if (smallest == -1 || pr[i] < pr[smallest]) {
                    smallest = i;
                }
            }
        }

        if (smallest != -1) {
            // Process the smallest (highest priority) process
            bt[smallest]--;

            // If the process has completed its burst time
            if (bt[smallest] == 0) {
                count++;
                ct[smallest] = time + 1;
                tat[smallest] = ct[smallest] - at[smallest];
                wt[smallest] = tat[smallest] - temp[smallest];
            }
        }
    }

    // Printing the results
    printf("\nP\tPr\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, pr[i], at[i], temp[i], ct[i], tat[i], wt[i]);
    }

    return 0;
}
