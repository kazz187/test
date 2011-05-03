#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n = 4;
	int m = 5;

	// 二次元配列の場合、二重ポインタだけじゃだめで、
	// 横幅 m を指定しなくてはならない。
	// GCC では、配列型の添字に定数のみならず、
	// 変数も用いることができる。
    int (*marray)[m] = malloc(sizeof(int) * n * m);
	
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			marray[i][j] = i * j;
			printf("%5d ", marray[i][j]);
		}
		printf("\n");
	}
	
    return 0;
}
