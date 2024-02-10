% Base case: Appending an empty list to another list results in the second list
append_lists([], List, List).

% Rule to append two non-empty lists
append_lists([Head | Tail1], List2, [Head | Result]) :-
    append_lists(Tail1, List2, Result).

% Example usage:
% ?- append_lists([1, 2, 3], [4, 5, 6], Result).
% This should display Result = [1, 2, 3, 4, 5, 6].