#include <cstdio>
struct Edge
{
	int from, to, dist;
	Edge* next;
	Edge(int f = 0, int t = 0, int d = 0, Edge* n = 0) :from(f), to(t), dist(d), next(n) {}
}*G[100005];
const int inf = 1 << 30;
int scs[100005];
bool isStor[100005];
int main()
{
	int n, m, k, ans;
	ans = inf;
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 0, u, v, l; i < m; i++)
	{
		scanf("%d%d%d", &u, &v, &l);
		G[u] = new Edge(u, v, l, G[u]);
		G[v] = new Edge(v, u, l, G[v]);
	}
	for (int i = 0; i < k; i++) scanf("%d", scs + i), isStor[scs[i]] = true;
	for (int i = 0; i < k; i++)
		for (Edge* cur = G[scs[i]]; cur; cur = cur->next)
			if (cur->dist < ans && !isStor[cur->to])
				ans = cur->dist;
	if (ans >= inf) ans = -1;
	printf("%d", ans);
	return 0;
}