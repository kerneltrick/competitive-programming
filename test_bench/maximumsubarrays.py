import io

def solve_max_sum_subarray(array):
    sum = 0
    best = 0
    for i in range(array):
        sum = max(array[i], sum+array[i])
        if sum > best:
            best = sum

    return best


    

n, k = tuple(input().split())

orig_array = [ int(v) for v in list(input().split())]


