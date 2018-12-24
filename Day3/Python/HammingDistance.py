def HammingDistance(Str1, Str2):

    count = 0

    if( len(Str1) != len(Str2) ):
        return None

    for i in range(len(Str1)):
        if( Str1[i] != Str2[i]):
            count += 1

    return count

Str1 = input("Enter string 1 = ")
Str2 = input("Enter string 2 = ")

HD = HammingDistance(Str1, Str2)

if( HD is None ):
    print("Strings are of different length")
else:
    print("Hamming Distance = ", HD)
