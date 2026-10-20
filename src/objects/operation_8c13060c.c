typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Inner {
    char unknown0[0xc];
    int f0c;
} Inner;
typedef struct Model {
    char unknown0[0x42c];
    Inner *f42c;
} Model;
typedef struct Pair {
    int f00;
    int f04;
    int f08;
} Pair;
extern Model *g_8c4d9a20[2];
extern Pair *g_8c4d9a28;
extern char g_8c3126fc[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern Pair *call_8c18de4c(int);
extern int call_8c118528(void *);
void operation_8c13060c(void)
{
    int t1;
    int t2;
    Pair *t3;
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)0x8c31269c, 0, 0, 0);
    }
    g_8c4d9a20[0] = (Model *)t1;
    t2 = call_8c011ecc(0x440);
    if (t2 != 0) {
        call_8c03d610(t2, 1, (void *)0x8c3126bc, 0, 0, 0);
    }
    g_8c4d9a20[1] = (Model *)t2;
    t3 = call_8c18de4c(0xc);
    g_8c4d9a28 = t3;
    t3->f00 = g_8c4d9a20[0]->f42c->f0c;
    g_8c4d9a28->f04 = g_8c4d9a20[1]->f42c->f0c;
    g_8c4d9a28->f08 = call_8c118528((void *)(g_8c3126fc + 0x8f));
}
