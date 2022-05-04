def main():
    iput = input()
    start = 0
    while True:
        space = iput.find(' ', start)
        if space == -1:
            break
        num = binaryToDecimal(int(iput[start:space]))
        print(chr(num), end='')
        start = space+1
    
    num = binaryToDecimal(int(iput[start:]))
    print(chr(num))

def binaryToDecimal(binary):
    binary1 = binary
    decimal, i, n = 0, 0, 0
    while(binary != 0):
        dec = binary % 10
        decimal = decimal + dec * pow(2, i)
        binary = binary//10
        i += 1
    return decimal

main()