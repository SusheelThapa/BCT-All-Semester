% Predicate to find the HCF of two numbers
hcf(Num1, Num2, Result) :-
    Num1 > 0,
    Num2 > 0,
    calculate_hcf(Num1, Num2, Result).

% Helper predicate to calculate the HCF using Euclidean Algorithm
calculate_hcf(Num, 0, Num).
calculate_hcf(Num1, Num2, Result) :-
    Remainder is Num1 mod Num2,
    calculate_hcf(Num2, Remainder, Result).

% Example usage:
% hcf(12, 18, Result).
% The Result will be 6.