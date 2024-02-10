% Facts
poor(jane). % Example: Jane is poor

% Premises
happy(X) :- not(poor(X)), smart(X).
not_stupid(X) :- read(X).
wealthy(john) :- read(john).
exciting_life(X) :- happy(X).

% Question
can_have_exciting_life :- exciting_life(_).
