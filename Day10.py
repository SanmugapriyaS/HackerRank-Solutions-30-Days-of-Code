
#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    count=0
    max=0
    while n>0:
        if(n%2==1):
            count+=1
            if(count>max):
                max=count
        else:
            count=0
        n//=2
    print(max)

