% Predicates
likes(bhogendra, Food) :- food(Food).
food(orange).
food(chicken).
eats(X, Y) :- eats_survives(X, Y), alive(X).
alive(jogendra).
eats_survives(_, _). % Placeholder for anything anyone eats and survives is food
likes(X, Y) :- eats(X, Y).

% Premises
forall(X, (food(X) -> likes(bhogendra, X))).
food(orange).
food(chicken).
forall(X, (eats(X, Y), alive(X) -> food(Y))).
forall(X, (likes(X, Y) -> eats(X, Y))).
eats(jogendra, peanuts).
alive(jogendra).
forall(X, (eats(shailendra, Y) -> eats(bhogendra, Y))).

% Query
likes(shailendra, chicken).
