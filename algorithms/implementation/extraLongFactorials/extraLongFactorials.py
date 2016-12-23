#!/bin/python3

import sys

def main(n):
    print(factorial(n))
    
def factorial(n):
    tot=1
    for i in range(n,0,-1):
        tot*=i
    
    return tot

n = int(input().strip())
main(n)