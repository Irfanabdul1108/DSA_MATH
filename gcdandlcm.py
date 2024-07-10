# platform - geeksforgeeks
#link - https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1
# concept - find gcd and lcm of two numbers

import math;
class Solution:
    def lcmAndGcd(self, A , B):
        gcd=math.gcd(A,B)
        lcm=(A*B)//gcd
        return lcm,gcd
