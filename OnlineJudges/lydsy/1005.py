def fast_pow(a,b):
  ans=1
  while b:
    if(b%2==1):
      ans*=a
    a*=a
    b/=2
  return ans
frac=[1]
for i in range(1,1001):
  frac.append(i*frac[-1])
n=(int)(input())
m=0
arr=[]
for i in range(0,n):
  arr.append((int)(input()))
ans=0
if n==1:
  if arr[0]==0:
    ans=1
  else:
    ans=0
else:
  ans=frac[n-2]
  left=n-2
  for i in arr:
    if i == -1:
      m+=1
    elif i==0:
      ans=0
      left=0
      break
    else:
      ans/=frac[i-1]
      left-=i-1
  if m<2:
    ans=0
  else:
    ans/=frac[left]
    ans*=fast_pow(m,left)
print ans