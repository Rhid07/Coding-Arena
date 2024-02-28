#!/usr/bin/python3

from string import Template

a = 'Rhidwan'
b = 'Nasarawa'
c = Template('Hello $n1, You are welcome to $n2 state.')
print(c.substitute(n1 = a, n2 = b))
