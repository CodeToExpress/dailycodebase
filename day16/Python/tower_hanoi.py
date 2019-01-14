"""
  @author : vishalshirke7
  @date : 10/01/2019
"""


def towerhanoi(n, from_rod, to_rod, aux_rod):
    if n == 1:
        print("Move disk 1 from rod %d to rod %d"%(from_rod, to_rod))
        return
    towerhanoi(n - 1, from_rod, aux_rod, to_rod)
    print("Move disk 1 from rod %d to rod %d"%(from_rod, to_rod))
    towerhanoi(n - 1, aux_rod, to_rod, from_rod)


no_of_disks = int(input())
towerhanoi(no_of_disks, 'A', 'C', 'B')
