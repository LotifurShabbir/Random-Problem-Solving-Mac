import math
class Solution:
    def minSteps(self, n: int) -> int:
        prime_fact = []
        for i in range(2, int(math.sqrt(n)) + 1):
            while n % i == 0:
                prime_fact.append(i)
                n //= i
        if n > 1:
            prime_fact.append(n)

        # print(prime_fact)
        return sum(prime_fact)