% Base case: Deleting an element from an empty list results in an empty list
delete_element(_, [], []).

% Rule to delete an element from the list
delete_element(Element, [Element | Tail], Result) :-
    delete_element(Element, Tail, Result).

delete_element(Element, [Head | Tail], [Head | Result]) :-
    Element \= Head,
    delete_element(Element, Tail, Result).

% Example usage:
% ?- delete_element(3, [1, 2, 3, 4, 3, 5], Result).
% This should display Result = [1, 2, 4, 5].