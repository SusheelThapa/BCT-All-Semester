% Base case: Filtering an empty list results in an empty list
filter_ones_and_twos([], []).

% Rule to filter a list, including only 1s and 2s
filter_ones_and_twos([1 | Tail], [1 | Result]) :-
    filter_ones_and_twos(Tail, Result).

filter_ones_and_twos([2 | Tail], [2 | Result]) :-
    filter_ones_and_twos(Tail, Result).

filter_ones_and_twos([_ | Tail], Result) :-
    filter_ones_and_twos(Tail, Result).

% Example usage:
% ?- filter_ones_and_twos([1,2,4,5,2,4,5,1,1], Result).
% This should display Result = [1, 2, 2, 1, 1].