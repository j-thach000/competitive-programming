def print_move(fr, to):
    print("move from " + str(fr) + " to " + str(to))
def towers_of_hanoi(n, fr, to, sp):
    if n == 1:
        print_move(fr, to)
    else:
        towers_of_hanoi(n-1, fr, sp, to)
        towers_of_hanoi(1, fr, to, sp)
        towers_of_hanoi(n-1, sp, to, fr)

towers_of_hanoi(3,1,2,3)