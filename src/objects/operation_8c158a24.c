typedef struct Entry {
    int id;
    char unknown4[0xc];
} Entry;
typedef struct Row {
    int count;
    Entry *entries;
} Row;
typedef struct S_g8c4daaa4 {
    char unknown0[0x10];
    Row *f10;
} S_g8c4daaa4;
typedef struct Arg1 {
    char f00;
    char f01;
    char f02;
} Arg1;
extern S_g8c4daaa4 *g_8c4daaa4;
void operation_8c158a24(int a0, Arg1 *a1)
{
    int found;
    unsigned char i;
    unsigned char j;
    int off;
    Row *rows;
    if (a1 != 0) {
        found = 0;
        for (i = 0; i != 0xf && found != 1; i++) {
            off = i << 3;
            for (j = 0; rows = g_8c4daaa4->f10, *(int *)((char *)rows + off) != j && found != 1; j++) {
                if (*(int *)((char *)*(Entry **)((char *)&rows->entries + off) + (j << 4)) == a0) {
                    a1->f00 = 3;
                    a1->f01 = i;
                    found = 1;
                    a1->f02 = j;
                }
            }
        }
    }
}
