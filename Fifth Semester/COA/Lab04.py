# To implement restoring division algorithm in digital computer.


from Lab01 import fullSubtractor, fullAdder


def restoringDivision(dividend, divisor, no_of_bits=8):
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

        #  Performing A = A - B, B is divisor
        remainder = fullSubtractor(remainder, divisor, no_of_bits)

        # Fill the quotient value
        quotient = quotient[0:no_of_bits - 1] + \
            ('0' if remainder[0] == '1' else '1')

        # Additional work if first value of A is 1
        if remainder[0] == '1':
            remainder = fullAdder(remainder, divisor, no_of_bits)

            # If more the given bit neglect the first bit
            remainder = remainder[1:] if len(
                remainder) == no_of_bits+1 else remainder
        count = count + 1

    return {'quotient': quotient, 'remainder': remainder}


if __name__ == "__main__":
    num_one = input("Binary Number one: ")
    num_two = input("Binary Number two: ")

    print(f"{num_one} / {num_two}    equals {restoringDivision(num_one, num_two)}")
