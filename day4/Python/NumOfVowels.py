import re

"""
  @author : vishalshirke7
  @date : 25/12/2018
"""

"""
This solution is based on regular expression module in python.
"""

print(len(re.findall(r'[a,e,i,o,u,A,E,I,O,U]', input())))

