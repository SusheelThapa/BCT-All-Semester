from Lab01 import fullAdder


def fullSubtractor(num_one, num_two, no_of_digits=8):
    def twoSComplement(num: str):
        num = num.replace('1', '_')
        num = num.replace('0', '1')
        num = num.replace('_', '0')
        return fullAdder(num, '1')

    num_one = num_one.zfill(no_of_digits)
    num_two = num_two.zfill(no_of_digits)

    subtraction = fullAdder(num_one, twoSComplement(num_two), no_of_digits)

    return subtraction[1:] if len(subtraction) == no_of_digits + 1 else subtraction


if __name__ == "__main__":
    a = input("Binary Number One: ")
    b = input("Binary Number Two: ")
    print(f"Binary subtraction of {a} and {b} is " + fullSubtractor(a, b))
