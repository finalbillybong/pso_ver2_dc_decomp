typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
    short f02;
};
struct Object {
    char unknown0[0x69];
    char f69;
    char f6a;
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern int operation_8c025fcc(int, int);
extern int call_8c198000(Object *, char);
extern int call_8c197fe0(Object *, char);
void operation_8c197f48(Object *o, Arg1 *a1)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int v4;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        t2 = operation_8c025fcc(t1, 0);
        if (t2 != 0) {
            goto L_8c197f7a;
        }
    }
    a1->f00 = 0;
    a1->f02 = 0;
    return;
L_8c197f7a:;
    t3 = call_8c198000(o, o->f6a);
    t4 = call_8c197fe0(o, o->f69);
    v4 = t3 == 0 ? t2 + 4 : t2 + 0x14;
    t4 <<= 2;
    a1->f00 = (unsigned char)*(unsigned char *)(v4 + t4);
    t2 = t3 == 0 ? t2 + 4 : t2 + 0x14;
    t2 += t4;
    a1->f02 = *(unsigned char *)(t2 + 1);
}
