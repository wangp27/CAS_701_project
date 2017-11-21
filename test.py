import sys
x = 7612058254738945000000
y = 9263591128439081000000
result = x*y
print("result is %d",result)
print("size of x is %d\n size of y is %d\n sizeof result is %d\n", sys.getsizeof(x), sys.getsizeof(y), sys.getsizeof(result))
print("x is type of %s, y is type of %s, result is type of %s",type(x),type(y),type(result))
