#!/usr/bin/python3
from string import Template

school = 'Sow academy'
stu_name = 'Al-amin and Ayman'
s = Template('$name school name is $cool.')
print(s.substitute(name = stu_name, cool = school))
