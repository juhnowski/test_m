:- module rot13_1.
:- interface.
:- import_module io.

:- pred main(io::di, io::uo) is det.

:- implementation.
:- import_module char, list, string.

main(!IO):-
    io.read_char(Result, !IO),
    (
        Result=ok(Char),
        io.write_char(rot13(Char),!IO),
        main(!IO)
    ;
        Result=eof
    ;
        Result=error(ErrorCode),
        io.format("%s\n",[s(io.error_message(ErrorCode))],!IO)
    ).

:- func rot13(char)=char.

rot13(CharIn)=(if rot13b(CharIn, CharOut) then CharOut else CharIn).
:-pred rot13b(char::in, char::out) is semidet.

rot13b('a','n').
rot13b('b','o').
rot13b('c','p').
rot13b('d','q').
rot13b('e','r').
rot13b('f','s').
rot13b('g','t').
rot13b('h','u').
rot13b('i','v').
rot13b('j','w').
rot13b('k','x').
rot13b('l','y').
rot13b('m','z').
rot13b('n','a').
rot13b('o','b').
rot13b('p','c').
rot13b('q','d').
rot13b('r','e').
rot13b('s','f').
rot13b('t','g').
rot13b('u','h').
rot13b('v','i').
rot13b('w','j').
rot13b('x','k').
rot13b('y','l').
rot13b('z','m').
rot13b('A','N').
rot13b('B','O').
rot13b('C','P').
rot13b('D','Q').
rot13b('E','R').
rot13b('F','S').
rot13b('G','T').
rot13b('H','U').
rot13b('I','V').
rot13b('J','W').
rot13b('K','X').
rot13b('L','Y').
rot13b('M','Z').
rot13b('N','A').
rot13b('O','B').
rot13b('P','C').
rot13b('Q','D').
rot13b('R','E').
rot13b('S','F').
rot13b('T','G').
rot13b('U','H').
rot13b('V','I').
rot13b('W','G').
rot13b('X','K').
rot13b('Y','L').
rot13b('Z','M').