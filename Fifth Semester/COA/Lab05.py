''' To implement restoring division algorithm in digital computer.'''


from Lab01 import fullAdder
from Lab03 import fullSubtractor


def nonRestoringDivision(dividend, divisor, no_of_bits=8):
    # Setting the required variable
    count = 0

    # Creating the quotient and remainder variable
    quotient = dividend.zfill(no_of_bits)  # Equivalent to Q
    remainder = '0'.zfill(no_of_bits)  # Equivalent to A

    # while loop for restoring division algorithm,
    while (count < no_of_bits):

        # Left shift operation
        remainder, quotient = (
            remainder + quotient)[1:no_of_bits+1], (remainder + quotient)[no_of_bits + 1:] + '_'

        # Setting the LSB of quotient based on remainder MSB
        if remainder[0] == '1':
            remainder = fullAdder(remainder, divisor, no_of_bits)
            remainder = remainder[1:] if len(
                remainder) == no_of_bits+1 else remainder
        else:
            remainder = fullSubtractor(remainder, divisor, no_of_bits)

        # Fill the quotient value
        quotient = quotient[0:no_of_bits - 1] + \
            ('0' if remainder[0] == '1' else '1')

        # If more the given bit neglect the first bit
        count = count + 1

    # Restoring the remainder if necessary
    if remainder[0] == '1':
        remainder = fullAdder(remainder, divisor, no_of_bits)
        remainder = remainder[1:] if len(
            remainder) == no_of_bits+1 else remainder

    return {'quotient': quotient, 'remainder': remainder}


if __name__ == "__main__":
    num_one = input("Binary Number one: ")
    num_two = input("Binary Number two: ")

    print(f"{num_one} / {num_two}    equals {nonRestoringDivision(num_one, num_two,4)}")
