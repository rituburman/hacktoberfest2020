from math import pow
def gcd(a,m):
  if(a==0):
    return m
  return gcd(m%a,a)
def fermat(a,m):
  if(gcd(a,m)==1):
    r=(a**(m-2))
	  r1=r%m
	  print("Moduler Multipicative Inverse =",r1)
else:
  print("Inverse exist nhi krta!!!!")

fermat(2,7)
