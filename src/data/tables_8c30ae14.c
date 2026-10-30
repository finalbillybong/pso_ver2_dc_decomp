/* Static data 8c30ae14-8c30ae6c: pointer_table, record_table objects, in address order. */

typedef struct { int f0; int f1; int f2; int f3; float f4; } Record_8c30ae14;
typedef struct { int f0; int f1; int f2; int f3; float f4; } Record_8c30ae3c;

extern const Record_8c30ae14 d_8c30ae14[];
extern const Record_8c30ae3c d_8c30ae3c[];

const Record_8c30ae14 d_8c30ae14[2] = {
    { 4, 5, 0, 1, 0.6f },
    { 4, 0, 0, 4, 0.6f }
};

const Record_8c30ae3c d_8c30ae3c[2] = {
    { 5, 5, 2, 1, 0.6f },
    { 5, 0, 2, 4, 0.6f }
};

const void *const d_8c30ae64[2] = {
    d_8c30ae14,
    d_8c30ae3c
};
