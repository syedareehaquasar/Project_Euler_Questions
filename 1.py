def sumOfMultiples(upto):
    # sum = 0
    # for x in range(upto):
    #     if x % 3 == 0 or x % 5 == 0:
    #         sum += x 
    # return sum
    return sum([x for x in range(upto) if x % 3 == 0 or x % 5 == 0 ])

print(sumOfMultiples(10))
