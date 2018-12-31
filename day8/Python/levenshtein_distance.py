def ind (m, n):
    return 0 if m == n else 1


def dist(first, second):
    first_length = len(first)
    second_length = len(second)

    m = []
    for i in range(first_length + 1):
        row = []
        for j in range(first_length + 1):
           row.append(0)
        m.append(row)

    for i in range(first_length + 1):
        m[i].append(i);

    for i in range(second_length + 1):
        m[0][i] = i;

    for i in range(1, first_length + 1):
        for j in range(1, second_length + 1):
            values = [m[i - 1][j] + 1, m[i][j - 1] + 1, m[i - 1][j - 1] + ind(first[i - 1], second[j - 1])]
            values.sort()
            m[i][j] = values[0]
    return m[first_length][second_length]

def main():
    print('Enter two strings: ')
    first = input()
    second = input()
    print(f'The Levenshtein distance between \"{first}\" and \"{second}\" is: {dist(first, second)}')

main()