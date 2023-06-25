from Lab01 import fullAdder


def binaryMultiplication(num_one: str, num_two: str):
    result = '0'
    # Logic of partial product
    for i, char in enumerate(num_two[::-1]):
        if char == '1':
            result = fullAdder(num_one + '0'*i, result)

    return result


num_one = input('Binary Number One: ')
num_two = input('Binary Number Two: ')

print(f"{num_one} * {num_two} = {binaryMultiplication(num_one,num_two)}")
