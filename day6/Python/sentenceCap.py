"""
  * @author : ashwek
  * @date : 27/12/2018
"""

def Cap(String):
    String = list(String)
    String[0] = String[0].upper()

    for i in range(1, len(String)):
        if(String[i] == ' ' and i < len(String)-1 ):
            String[i+1] = String[i+1].upper()

    return "".join(String)

Str = input("Enter a string = ")

print("Capitalize words = ", Cap(Str))
