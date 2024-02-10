% Predicates
member(X, club).
can_waltz(X) :- member(X, club).
can_jive(X) :- member(X, club).

% Premises
forall(X, (member(X, club) -> (not(can_waltz(X)) ; not(can_jive(X))))).
not(can_waltz(fred_dad)).
forall(X, (can_do(X, Y) -> can_do(fred, Y))).
forall(X, (can_do(X, Y) -> can_do(parent(X), Y))).

% Statement to Prove
exists(X, member(X, club), not(can_jive(X))).
