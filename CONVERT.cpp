#include <stdio.h>

int main()
{
    int count;
    scanf("%d", &count);

    for(int i = 1; i <= count; i++){
        double numericData;
        char strData[3];
        scanf("%lf %s",&numericData, strData);
        switch(strData[0] + strData[1])
        {
        case 'k' + 'g':
            printf ("%d %.4lf lb\n" , i, numericData * 2.2046);
            break;
        case 'l' + 'b':
            printf ("%d %.4lf kg\n" , i, numericData * 0.4536);
            break;
        case  'l' + '\0':
            printf ("%d %.4lf g\n" , i, numericData * 0.2642);
            break;
        case 'g' + '\0':
            printf ("%d %.4lf l\n" , i, numericData * 3.7854);
            break;
        }
    }
    return 0;
}
