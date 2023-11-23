# euclidean algorithm
def gcd(x, y): 
    # base case
    if y == 0:
        return x
    # recursive calls
    else:
        return gcd(y, x % y)
    
# multiplication
def mult(a, b):
    # base case
    if b == 1:
        return a
    # recursive calls
    else:
        return a + mult(a,b-1)
    
# factorial
def factorial(n):
    # base case
    # recursive calls
    if n == 0:
        return 1
    else:
        return n * factorial(n-1) # n * the return results of factorial(n-1), to the right of the * operation is the gathered up computations
    