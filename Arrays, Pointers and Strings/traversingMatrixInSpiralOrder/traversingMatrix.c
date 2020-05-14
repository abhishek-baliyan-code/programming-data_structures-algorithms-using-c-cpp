#include <stdio.h>

int main(void)
{
    int A[5][5];
    int B[25];

    int M, N;
    int i, j;
    int cnt = 0, cnt1 = 0;

    int top, bot, left, right;

    scanf("%d %d", &M, &N);
    for (i = 0; i < M; i++) 
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    top = 0;
    bot = M - 1;
    left = 0;
    right = N -1;

    for (cnt1 = 0; cnt1 <= M/2 && cnt1 <= N/2; cnt1++)
    {
        // top's left to top's right
        for (i = left; i <= right; i++)
        {
            B[cnt++] = A[top][i];
        }

        // top's right - 1 to bottom's right
        for (i = top + 1; i <= bot; i++)
        {
            B[cnt++] = A[i][right];
        }
        
        // bottom's right - 1 to bottom's left
        for (i = right - 1; i >= left; i--)
        {
            B[cnt++] = A[bot][i];
        }

        // bottom's left - 1 to top's - 1
        for (i = bot - 1; i >= top + 1; i--)
        {
            B[cnt++] = A[i][left];
        }

        top++;
        bot--;
        right--;
        left++;
    }

    if (top == bot && left == right)
    {
        B[cnt++] = A[top][left];
    }
    else if (top < bot)
    {
        for (i = top; i <= bot; i++)
        {
            B[cnt++] = A[i][left];
        }
    }
    else if (left < right)
    {
        for (i = left; i <= right; i++)
        {
            B[cnt++] = A[top][i];
        }
    }

    for (i = 0; i < M*N-1; i++)
    {
        printf("%d ", B[i]);
    }
    
    printf("%d\n", B[i]);

    return 0;
}