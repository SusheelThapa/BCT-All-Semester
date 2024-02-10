% Base case: Sum of an empty list is 0
sum_list([], 0).

% Rule to calculate the sum of a non-empty list
sum_list([Head | Tail], Sum) :-
    sum_list(Tail, TailSum),
    Sum is Head + TailSum.

% Example usage:
% ?- sum_list([1, 2, 3, 4, 5], Result).
% This should display Result = 15.