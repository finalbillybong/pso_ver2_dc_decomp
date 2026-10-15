typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be04 S_g8c44be04;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
};
extern char g_8c335d04[];
extern void call_8c138598(int);
extern void call_8c0a2144(int);
extern void call_8c0a21a4(void);
extern void call_8c1003d0(void *);
extern int operation_8c01c25c(void);
extern int call_8c17796c(int);
extern void operation_8c206d8c(int);
extern void call_8c09e188(void *, int, int);
extern int allocate_block(void *, unsigned int);
extern void operation_8c206e2c(void *);
void operation_8c206cc0(Object *o)
{
    int t1;
    int t2;
    int t3;
    if (!(--o->f20 > 0)) {
        if (*(int *)0x8c4d9b88 == 0) {
            call_8c138598(1);
            call_8c0a2144(6);
            call_8c0a21a4();
            call_8c1003d0((void *)((g_8c335d04 + 0x11)));
            t1 = operation_8c01c25c();
            if (t1 != 0x10) {
                t2 = call_8c17796c(0x2f);
                if (t2 != 0) {
                    operation_8c206d8c(4);
                    goto L_8c206d26;
                }
                operation_8c206d8c(3);
            } else {
                call_8c09e188((void *)(*(S_g8c44be04 **)0x8c44be04), 0, 1);
            }
L_8c206d26:;
            call_8c09e188((void *)(*(S_g8c44be04 **)0x8c44be04), 0, 3);
            t3 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x20);
            if (t3 != 0) {
                operation_8c206e2c((void *)t3);
            }
        }
        o->f04 |= 1;
    }
}
