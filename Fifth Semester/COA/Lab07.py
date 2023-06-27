# Booth's Algorithm for signed binary multiplication

from Lab01 import fullAdder
from Lab02 import binaryMultiplication
from Lab03 import fullSubtractor


def boothBinaryMultiplication(num_one: str, num_two: str, no_of_bits: int = 8):

    def rightShift(number):
        return number[0] + number[0:no_of_bits-1], number[no_of_bits-1:-2], number[-2]

    num_two = num_two.zfill(
        no_of_bits) if num_two.__len__ != no_of_bits else num_two
    count = no_of_bits
    A = ''.zfill(no_of_bits)
    Q = num_two.rjust(no_of_bits, '1' if num_two[0] == '1' else '0')
    Q_ = '0'
    M = num_one.zfill(no_of_bits)

    while count > 0:
        if Q[-1] == '0' and Q_ == '1':
            A = fullAdder(A, M, no_of_bits)
            A = A[1:] if len(A) == no_of_bits + 1 else A
        elif Q[-1] == '1' and Q_ == '0':
            A = fullSubtractor(A, M, no_of_bits)

        A, Q, Q_ = rightShift(A+Q + Q_)

        count -= 1
    return A + Q


if __name__ == "__main__":

    a = input("Binary Number One: ")
    b = input("Binary Number Two: ")

    '''
        Note: 
        For unsigned numbers only both the result will be same
        For signed numbers it is different as partial product can only do unsigned number calculation

        '''
    print(
        f"Binary multiplication with Booth Algorithm of {a} and {b} is " + boothBinaryMultiplication(a, b, 4))
    print(
        f"Binary multiplication with Partial Product method of {a} and {b} is " + binaryMultiplication(a, b))
