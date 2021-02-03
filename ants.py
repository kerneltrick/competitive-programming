import io
import sys

def worst_case(l, pos):
    if(pos > l//2):
        return pos
    return l-pos

def best_case(l, pos):
    if(pos > l//2):
        return l - pos
    return pos

cases = int(input())

while cases > 0:
    l, n = map(int, sys.stdin.readline().strip().split())

    worstCase = None
    bestCase = None
    antCount = 0
    while antCount < n:
        ants = list(map(int, sys.stdin.readline().strip().split()))
        antCount += len(ants)

        for ant in ants:

            candidateBest = best_case(l, ant)
            candidateWorst = worst_case(l, ant)

            if not bestCase or bestCase < candidateBest:
                bestCase = candidateBest
            if not worstCase or worstCase < candidateWorst:
                worstCase = candidateWorst 

    ###OUTPUT    
    print(bestCase, worstCase)
    cases -= 1





