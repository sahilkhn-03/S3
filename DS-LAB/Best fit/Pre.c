Here is your corrected program with proper brackets for the if statements:

#include <stdio.h>

int main() {
    int n, at[10], bt[10], ct[10], wt[10], temp[10], tat[10], smallest, count = 0, time;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter Arrival Time and Burst Time:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &at[i], &bt[i]);
        temp[i] = bt[i];
    }

    bt[9] = 9999;
    for (time = 0; count != n; time++) {
        smallest = 9;
        for (int i = 0; i < n; i++) {
            if (at[i] <= time && bt[i] < bt[smallest] && bt[i] > 0) {
                smallest = i;
            }
        }

        bt[smallest]--;
        if (bt[smallest] == 0) {
            count++;
            ct[smallest] = time + 1;
            tat[smallest] = ct[smallest] - at[smallest];
            wt[smallest] = tat[smallest] - temp[smallest];
        }
    }

    printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, at[i], temp[i], ct[i], tat[i], wt[i]);
    }

    return 0;
}

Now, all if statements have proper brackets {} for better readability and structure.
