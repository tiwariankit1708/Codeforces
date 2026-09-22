import sys

def solve():
    sticks = sorted(list(map(int, sys.stdin.read().split())))
    
    # 4 combinations of 3 sticks from sorted array [a, b, c, d]
    triplets = [
        (sticks[0], sticks[1], sticks[2]),
        (sticks[0], sticks[1], sticks[3]),
        (sticks[0], sticks[2], sticks[3]),
        (sticks[1], sticks[2], sticks[3])
    ]
    
    can_triangle = False
    can_segment = False
    
    for x, y, z in triplets:
        if x + y > z:
            can_triangle = True
        elif x + y == z:
            can_segment = True
            
    if can_triangle:
        print("TRIANGLE")
    elif can_segment:
        print("SEGMENT")
    else:
        print("IMPOSSIBLE")

if __name__ == "__main__":
    solve()