def fibonacci(nt):
    if nt == 0:
        return 0
    if nt == 1:
        return [0, 1]
    terms = [0, 1]
    while(len(terms) < nt):
        terms.append(sum(terms[-2:]))
    return terms


def recurfibo(n):
    if n <= 1:
        return n
    return recurfibo(n-1) + recurfibo(n-2)

def even_fibonacci(terms):
    return sum(x for x in terms[::3])

print(fibonacci(10))
for i in range(10):
    print(recurfibo(i))
print(even_fibonacci(fibonacci(10)))