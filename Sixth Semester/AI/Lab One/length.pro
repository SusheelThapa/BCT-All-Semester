% Base case: Length of an empty list is 0
length_of_list([], 0).

% Rule to calculate the length of a non-empty list
length_of_list([_ | Tail], Length) :-
    length_of_list(Tail, TailLength),
    Length is 1 + TailLength.

% Example usage:
% ?- length_of_list([1, 2, 3, 4, 5], Result).
% This should display Result = 5.