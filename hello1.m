:-module hello1.
:-interface.
:-import_module io.
:-pred main(io::di, io::uo) is  det.
:-implementation.
main(!IO):-
    io.write_string("Hello,",!IO),
    io.write_string("World",!IO),
    io.nl(!IO).

