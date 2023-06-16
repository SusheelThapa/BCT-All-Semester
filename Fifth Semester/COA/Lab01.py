#! /usr/bin/python3

'''
To design n-bit(4-bit) adder for unsigned integer binary numbers
'''


def fullAdder(num_one, num_two):
    '''
    Assume that we will get the string of equla length
    '''
    def makeEqual(num_one, num_two):
        '''
        It is used to make the two binary number of equal length
        '''
        max_len = max(len(num_one), len(num_two))

        num_one = num_one.zfill(max_len)
        num_two = num_two.zfill(max_len)

        return num_one, num_two, max_len

    def binaryAddition(bit_one, bit_two, carry):
        '''
        Implementation of Truth table of full adder
        '''
        if carry == '0':
            if (bit_one == '0' and bit_two == '0'):
                return '0', '0'
            elif (bit_one == '0' and bit_two == '1'):
                return '0', '1'
            elif (bit_one == '1' and bit_two == '0'):
                return '0', '1'
            elif (bit_one == '1' and bit_two == '1'):
                return '1', '0'
        else:
            if (bit_one == '0' and bit_two == '0'):
                return '0', '1'
            elif (bit_one == '0' and bit_two == '1'):
                return '1', '0'
            elif (bit_one == '1' and bit_two == '0'):
                return '1', '0'
            elif (bit_one == '1' and bit_two == '1'):
                return '1', '1'

    num_one, num_two, max_len = makeEqual(num_one, num_two)

    # Declaration of required variable
    addition = ''
    carry = '0'

    for i in range(1, max_len+1):
        # Carrying out operation bit wise
        carry, result = binaryAddition(num_one[-1 * i], num_two[-1*i], carry)
        addition += result

    # Checking if the operation has carry at atlast or note
    if carry == '1':
        addition += carry

    # Reversing the result at last
    return addition[::-1]


a = input("Binary Number One: ")
b = input("Binary Number Two: ")
print(f"Binary aadiiton of {a} and {b} is " + fullAdder(a, b))
