% Predicates
pompeian(X) :- roman(X).
roman(X) :- loyal_to(X, _); hates(X, _).
loyal_to(_, caesar).
hates(X, caesar).
ruler(caesar).
tried_to_assassinate(marcus, caesar).

% Premises
forall(X, (pompeian(X) -> roman(X))).
forall(X, (roman(X) -> (loyal_to(X, caesar) ; hates(X, caesar)))).
forall(X, exists(Y, loyal_to(X, Y))).
forall(X, (tried_to_assassinate(X, Y) -> \+ loyal_to(X, Y))).

% Query
% hates(marcus, caesar).
