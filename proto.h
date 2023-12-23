#ifndef _PROTO_H
#define _PROTO_H

#define SOF '$'

#define PACKET_LENGTH 100

#define PACKET_LENGTH_TEMP 100

typedef enum opcode{
    GET=0;
    SET=1;
    INVALID=-1
}opcode;

typedef enum errors{
    WRONG_OPCODE=0
}err;

typedef enum type{
    CHAR=0;
    INT=1;
    STR=2;
    INVALID=-1
}type;


typedef struct message_format{
    char s_frame;
    opcode opc;
    type typ;
    int length;
    char *value;
    int check_sum;
}msg_fmt;

typedef struct string_things{
    int pos;
}str_things;

str_things p;

#endif
