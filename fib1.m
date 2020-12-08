:-module fib1.

:-interface.
:-import_module io,list,string.
:-pred main(io::di, io::uo) is det.

:-implementation.
:-import_module int.

% :-pred fib1(int::in, int::out)  is det.
% fib1(N,X):-
%     (if N=<2
%     then X = 1
%     else fib1(N-1,A),fib1(N-2, B), X=A+B
%     ).


:-func fib1(int) = int.
fib1(N)=( if N =< 2 then 1 else fib1(N-1)+fib1(N-2)).

main(!IO):-
    io.read_line_as_string(Result, !IO),
    (if 
        Result = eof
     then
        io.format("bye bye...\n",[],!IO)
     else if
        Result=ok(String),
        string.to_int(string.strip(String), N)
     then
        io.format("fib1(%d)=%d\n",[i(N),i(fib1(N))],!IO),
        main(!IO)
     else
        io.format("That's not a number...\n",[],!IO)
    ).