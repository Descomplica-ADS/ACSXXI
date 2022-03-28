Start:
    MOV AL, 84;
    OUT 01;
    MOV CL, 3
L1:
    DEC CL
    JNZ L1

    MOV AL, 88;
    OUT 01;

    MOV AL, 30;
    OUT 01;
    MOV CL, 3
L2:
    DEC CL
    JNZ L2

    MOV AL, 50;
    OUT 01;

    JMP Start

    END
