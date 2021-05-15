#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int n, d[110];
int f(int x) {
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += i;
	}
	return ans;
}

int t() {
	int max = 0;
	int j = 0;
	for (int i = 0; i < n; i++)
		if (d[i] > max) {
			max = d[i];
			j = i;
		}
	return j + 1;
}
int main() {
#if 0
	scanf_s("%d", &n);
	printf("%d\n", f(n));

#endif

#if 0
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &d[i]);
	}
	printf("%d", t());

#endif

#if 0
	int n;
	printf("¼ö ÀÔ·Â: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (i == 0 || i = n - 1 || j == 0 || j == i) {
				printf("* ");
			}
			else if(j!=0||j!=i) printf(" ");
		}
		printf("\n");
	}

#endif

#if 1
    int arr[100][100];
    int n, m, num = 1;
    int cnt = 0;
    int max = 0;
    scanf_s("%d %d", &n, &m);
    if (n > m)max = n;
    else max = m;
    if (n == 0 || m == 0)
    {
        if (n == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cnt++;
                printf("%3d\n", cnt);
            }
        }
        else if (m == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cnt++;
                printf("%3d", cnt);
            }
        }
    }
    else
    {
        for (int i = 0; i <= (n * m); i++)
        {
            for (int j = 0; j <= max; j++)
            {
                int k = i - j;
                if (k >= 0 && k < n)
                    arr[j][k] = num++;
                if (k == j && i != j + cnt) arr[j][k] = num;
                cnt++;
            }
            cnt = 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == n - 1 && j == m - 1)
                    printf("%3d ", arr[j][i] - 1);
                else
                    printf("%3d ", arr[j][i]);
            }
            printf("\n");
        }
    }

#endif
	return 0;
}