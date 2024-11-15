#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ROW, COLUMN;
    scanf("%d %d", &ROW, &COLUMN);

    int a[ROW][COLUMN];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int counter = 0;
    int peaks[ROW * COLUMN][2];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            int peakFlag = 1;

            if (i > 0 && a[i][j] <= a[i - 1][j])
            {
                peakFlag = 0;
            }
            if (i < ROW - 1 && a[i][j] <= a[i + 1][j])
            {
                peakFlag = 0;
            }
            if (j > 0 && a[i][j] <= a[i][j - 1])
            {
                peakFlag = 0;
            }
            if (j < COLUMN - 1 && a[i][j] <= a[i][j + 1])
            {
                peakFlag = 0;
            }

            if (peakFlag)
            {
                peaks[counter][0] = i + 1; 
                peaks[counter][1] = j + 1;
                counter++;
            }
        }
    }

    for (int i = 0; i < counter; i++)
    {
        printf("%d %d\ROW", peaks[i][0], peaks[i][1]);
    }

    printf("%d\ROW", counter);

    return 0;
}