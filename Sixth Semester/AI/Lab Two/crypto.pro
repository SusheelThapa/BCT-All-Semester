:- use_module(library(clpfd)).

solve_forty_ten_sixty([F, O, R, T, Y, E, N, S, I, X]) :-
    % All digits must be between 0 and 9
    Vars = [F, O, R, T, Y, E, N, S, I, X],
    Vars ins 0..9,

    % All digits must be different
    all_different(Vars),

    % Define the arithmetic relation
    % FORTY
    FORTY #= F*10000 + O*1000 + R*100 + T*10 + Y,
    % TEN
    TEN #= T*100 + E*10 + N,
    % SIXTY
    SIXTY #= S*10000 + I*1000 + X*100 + T*10 + Y,

    % The equation FORTY + TEN + TEN = SIXTY
    FORTY + TEN + TEN #= SIXTY,

    % The leading digits cannot be zero
    F #\= 0, T #\= 0, S #\= 0,

    % Labeling the variables
    label(Vars).

% You can test the solution using the following query:
% ?- solve_forty_ten_sixty(Digits).