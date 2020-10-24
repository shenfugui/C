#include <stdio.h>

int path[30], st[30];
int n;

void dfs(int u) {
    if (u == n) {
        for (int i = 0; i < n; i++) printf("%d ", path[i]);
        puts("");
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!st[i]) {
            path[u] = i;
            st[i] = 1;
            dfs(u + 1);
            st[i] = 0;
        }
    }
}

int main() {
    scanf("%d", &n);
    dfs(0);
    return 0;
}