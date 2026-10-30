/* Static data 8c3033b4-8c3034f8: float_table, pointer_table, record_table objects, in address order. */

typedef struct { int f0; int f1; int f2; int f3; int f4; int f5; int f6; int f7; int f8; int f9; } Record_8c3033b8;
typedef struct { int f0; int f1; float f2; float f3; int f4; int f5; int f6; int f7; int f8; int f9; int f10; } Record_8c303458;

extern const char str_8c3034f8[];
extern const char str_8c30353c[];
extern const char str_8c303540[];
extern const char str_8c303546[];

const void *const d_8c3033b4[1] = {
    str_8c3034f8
};

const Record_8c3033b8 d_8c3033b8[4] = {
    { 1, 0, 1, 0, 37, 16, 0, 0, 0, 0 },
    { 1, 0, 9, 0, 37, 17, 0, 0, 0, 0 },
    { 3, 0, 180, 0, 37, 18, 0, 0, 0, 0 },
    { 1, 0, 9, 0, 37, 19, 0, 0, 0, 0 }
};

const Record_8c303458 d_8c303458[3] = {
    { 4, 4, 0.0f, 100.0f, 0, 37, 20, 0, 0, 0, 0 },
    { 4, 4, 0.0f, 100.0f, 0, 37, 21, 0, 0, 0, 0 },
    { 4, 4, 1.0f, 999.0f, 0, 37, 22, 0, 0, 0, 0 }
};

const float d_8c3034dc[4] = {
    0.5f, 0.0f, 1.0f, 1.0f
};

const void *const d_8c3034ec[3] = {
    str_8c30353c,
    str_8c303540,
    str_8c303546
};
