x = float(input().strip())

optionOnePayout = 100.0 / x
optionTwoPayout = 100.0 / (100.0 - x)


print("{:.4f}".format(optionOnePayout))
print("{:.4f}".format(optionTwoPayout))

