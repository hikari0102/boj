#include <stdio.h>
#include <memory.h>

/*
greedy?
배열의 0번부터 i번까지 1~k가 l번 나오면 l까지의 부분 수열을 모두 만들수 있음
따라서 i를 0부터 n-1까지 늘리면서 조사하면서 확인
*/

int main() {
    int n, k;
    int arr[100001], chk[10001] = {0}, cnt = 0, ans = 0;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(chk[arr[i]] == 0) {
            chk[arr[i]]++;
            cnt++;
        }
        if(cnt == k) {
            ans++;
            memset(chk, 0, sizeof(chk));
            cnt = 0;
        }
    }
    printf("%d\n", ans + 1);
}