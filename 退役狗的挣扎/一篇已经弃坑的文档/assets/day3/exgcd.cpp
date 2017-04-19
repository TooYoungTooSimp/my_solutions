void exgcd(int64 a, int64 b, int64 &x, int64 &y)
{ b == 0 ? (x = 1, y = 0) : (exgcd(b, a % b, y, x), y -= x * (a / b)); }