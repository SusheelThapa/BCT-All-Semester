% Facts about family relationships
parent(john, bob).
parent(john, alice).
parent(alice, charlie).
parent(bob, david).
parent(bob, emma).
parent(alice, frank).
parent(charlie, grace).

% Rules to deduce relationships
sibling(X, Y) :-
    parent(Z, X),
    parent(Z, Y),
    X \= Y.

grandparent(X, Y) :-
    parent(X, Z),
    parent(Z, Y).

% Example usage:
% 1. To find siblings:
% ?- sibling(bob, alice).
% This should return true.

% 2. To find grandparents:
% ?- grandparent(john, grace).
% This should return false.