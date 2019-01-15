"""
@author:aaditkamat
@date: 13/01/2019
"""
def print_chessboard(chessboard):
    for i in range(len(chessboard)):
        print(chessboard[i])

def fill_chessboard(i, j,chessboard):
    chessboard[i][j] = 1

    for x in range(len(chessboard)):
        if x != i:
            chessboard[x][j] = 0

    for y in range(len(chessboard)):
        if y != j:
            chessboard[i][y] = 0

    x, y = (i + 1, j + 1)
    while x < len(chessboard) and y < len(chessboard):
        chessboard[x][y] = 0
        x += 1
        y += 1

    x, y = (i - 1, j - 1)
    while x >= 0 and y >= 0:
        chessboard[x][y] = 0
        x -= 1
        y -= 1

    x, y = (i + 1, j - 1)
    while x < len(chessboard) and y >= 0:
        chessboard[x][y] = 0
        x += 1
        y -= 1

    x, y = (i - 1, j + 1)
    while x >= 0 and y < len(chessboard):
        chessboard[x][y] = 0
        x -= 1
        y += 1

def try_position(i, chessboard):
    fill_chessboard(0, i, chessboard)

    for i in range(1, len(chessboard)):
        for j in range(len(chessboard)):
            if chessboard[i][j] == -1:
                fill_chessboard(i, j, chessboard)

def reset_chessboard(chessboard):
    for i in range(len(chessboard)):
        for j in range(len(chessboard)):
            chessboard[i][j] = -1

def is_correct(chessboard):
    for i in range(len(chessboard)):
        if chessboard[i].count(1) == 0:
            return False
    return True

def n_queens(num):
    chessboard = []
    for i in range(num):
        chessboard.append([-1] * num)

    for i in range(num):
        try_position(i, chessboard)
        if (is_correct(chessboard)):
            print_chessboard(chessboard)
            return
        reset_chessboard(chessboard)

def main():
    print("Enter number of queens: ", end="")
    num = int(input())
    n_queens(num)

main()