fill(isprime, true);
for (int i = 2; i < n; i++)
    if (isprime[i])
        for (int j = i * i; j < n; j += i)
            isprime[i] = false;

