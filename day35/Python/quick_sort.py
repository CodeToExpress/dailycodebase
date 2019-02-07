"""
@author : imkaka
@date   : 5/2/2019
"""

import sys


def QuickSort(A, l, r):  # sort A[l:r]
    if r - l <= 1:
        return()

    #Pivot  = A[l]
    yellow = l + 1

    for green in range(l + 1, r):
        if(A[green] <= A[l]):
            (A[yellow], A[green]) = (A[green], A[yellow])
            yellow += 1
    # Move Pivot into place
    (A[l], A[yellow - 1]) = (A[yellow - 1], A[l])

    QuickSort(A, l, yellow - 1)
    QuickSort(A, yellow, r)


def main():
    A = [20, 34, 1, 3, -2, 34, 65, 100, 0]
    print('Before Sorting', A)
    print(len(A))
    QuickSort(A, 0, len(A))

    print('After Sorting', A)


if __name__ == '__main__':
    main()
