% Facts
horse(bluebeard).
mammal(horse).
mammal(cow).
mammal(pig).
parent(bluebeard, charlie).

% Inverses
inverse(Offspring, Parent) :- parent(Parent, Offspring).

% Rules
offspring_of(X, Parent) :-
    parent(Parent, X),
    same_species(Parent, X).

horse_offspring(X, Parent) :-
    parent(Parent, X),
    horse(Parent).

same_species(X, X).
same_species(X, Y) :- same_species(Y, X).

has_parent(X) :- mammal(X).

% Query
query(horse_offspring(charlie, _)).
