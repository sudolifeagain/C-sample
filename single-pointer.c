#include <stdio.h>

// main関数からポインタでnbが指す変数のアドレスを受け取っている
void single_pointer(int *nb)
{
	*nb = 42; // ポインタが指す先(=nの値)に42を代入
}

int main(void)
{
	int *nb; // ポインタ変数
	int n;   // 通常の変数

	n = 32;     // nを32で初期化
	nb = &n;    // ポインタ変数nbに変数nのアドレスを格納
	
	printf("before : %d\n", *nb); // single_pointer関数を呼ぶ前のnの値を確認
	printf("n address: %p\n", &n); // 変数nのアドレス
	printf("nb value: %p\n", nb);  // ポインタ変数nbの値(=変数nのアドレス)
	
	single_pointer(nb); // 関数にnbの値(=変数nのアドレス)を渡す
	printf("after : %d\n", *nb); // single_pointer関数実行後のnの値を確認
	
	return (0);
}