typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Rec {
    char f00;
    char f01;
    char unknown2[0x2];
    int f04;
    Block20 f08;
} Rec;
typedef struct List {
    char n;
    char unknown1[0x3];
    Rec recs[1];
} List;
extern void call_8c027b60(int, List *, int);
int operation_8c028430(int a0, int a1, Rec *a2, int a3, register List *a4)
{
    int i;
    Rec *d;
    a4->n = a1;
    d = a4->recs;
    for (i = 0; i < a1; i++) {
        d->f00 = a2->f00;
        d->f01 = a2->f01;
        d->f04 = a2->f04;
        d->f08 = a2->f08;
        d++;
        a2++;
    }
    call_8c027b60(a0, a4, a3);
    return 1;
}
