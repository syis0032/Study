#include <stdio.h>

int main()
{
    int count;
    scanf("%d", &count);

    for(int i = 1; i <= count; i++){
        int totalGoalWatt;
        int hoursWatt;
        int totalWatt = 0;
        scanf("%d",&totalGoalWatt);
        for (int j = 0; j < 9 ; j++){
            scanf("%d", &hoursWatt);
            totalWatt += hoursWatt;
        }

        totalWatt > totalGoalWatt ? printf("NO\n") : printf("YES\n");

    }
    return 0;
}
