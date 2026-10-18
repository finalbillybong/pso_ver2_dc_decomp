typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418258 S_g8c418258;
typedef struct Object Object;
struct Object {
    char unknown0[0x700];
    void *f700;
    char unknown704[0x24];
    int f728;
    unsigned short f72c;
    char unknown72e[0x2];
    int f730;
};
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
extern int g_8c418248;
extern S_g8c418258 *g_8c418258;
extern int g_8c44be04;
extern int g_8c4689b8;
extern short g_8c4689bc;
extern char g_8c41cba0[];
extern int operation_8c05bae8(void);
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c18e8a0(int, int);
extern void operation_021fcc(void *);
void operation_8c067e04(Object *o)
{
    int v7;
    int v3;
    int v10;
    short v12;
    short v13;
    int t3;
    int t1;
    S_c8c021ef8 *t2;
    int v6;
    S_c8c021ef8 *t4;
    S_c8c021ef8 *t5;
    if (g_8c4689b8 != 0) {
        o->f728 = 1;
    } else {
        o->f728 = 0;
        o->f72c = 0xffff;
        return;
    }
    o->f730 = 0x96;
    o->f700 = (g_8c41cba0 + 0x20);
    t1 = operation_8c05bae8();
    if (t1 != 0) {
        v13 = g_8c4689bc;
        if ((unsigned short)v13 == 0xffff) {
            t2 = lookup_low_id((int)g_8c418258);
            if (t2 != 0 && t2->f37c == g_8c44be04) {
                v3 = (int)g_8c418258;
                v12 = (int)v3;
                goto L_8c067ebc;
            }
            v7 = (int)0;
            v6 = (int)0x37c;
            while ((unsigned int)4 > (unsigned int)(unsigned short)v7) {
                v12 = call_8c18e8a0((int)((int)g_8c418258 + (unsigned short)v7 + 1), 4);
                t4 = lookup_low_id((int)((unsigned short)v12));
                if (t4 != 0 && *(int *)((char *)((char *)t4 + 0x0) + (v6)) == (int)g_8c44be04) {
                    goto L_8c067ebc;
                }
                v7 = (int)(v7 + 1);
            }
            goto L_8c067ebc;
        }
        v12 = (int)v13;
    } else {
        v10 = (int)g_8c418248;
        v12 = (int)v10;
    }
L_8c067ebc:;
    t5 = lookup_low_id((int)((unsigned short)v12));
    if (t5 != 0) {
        operation_021fcc((void *)t5);
    }
    o->f72c = v12;
}
