import io

def count(array, sum):
    count = 0
    s = 0
    for a in array[::-1]:
        s+=a
        count+=1
        if s == sum:
            break
    return count

def solve_max_sum_subarray(array):
    sum = 0
    best = 0
    lenth = 0
    end = 0
    for i in range(len(array)):
        sum = max(array[i], sum+array[i])
        if sum > best:
            best = sum
            length = count(array[:i], sum)
            end = i
    return best, (i-length), end

n, k = tuple(input().split())

orig_array = [ int(v) for v in list(input().split())]

test_now = [orig_array]
for i in range(len(k)):
    maximumSubarrays = []
    next_test = []
    for arr in test_now:
        print(arr)
        best, begin, end = solve_max_sum_subarray(arr)
        print(best,begin,end)
        if(begin != 0):
            next_test.append(arr[:begin])
        if((end+1) != len(arr)):
            next_test.append(arr[end+1:])
        maximumSubarrays.append(best)
    test_now = next_test

print(maximumSubarrays)
print(sum(maximumSubarrays))

