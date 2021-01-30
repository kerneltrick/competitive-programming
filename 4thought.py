import io

x = int(input())

operators = ['+', '-', '*', '//']

for i in range(x):
    n = int(input())

    ans = 'no solution'
    for a in operators:
        for b in operators:
            for c in operators:
                expres = '4 {} 4 {} 4 {} 4'.format(a,b,c) 
                result = int(eval(expres))
                if(  result == n ):
                    expres = expres.replace('//','/')

                    ans = '{} = {}'.format(expres, int(result))
    print(ans)




