typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be80 S_g8c44be80;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c44be80 *g_8c44be80;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dbc60;
extern int g_8c4dbc64;
extern int classify_range_8c0e76d4(void *);
extern void operation_8c189994(void);
extern void operation_8c1c7208(void);
extern void operation_8c20784c(void);
extern int allocate_block(void *, unsigned int);
extern void operation_8c189df4(void *, int);
void operation_8c189ca0(int a0)
{
    unsigned int v1;
    int t1;
    int t2;
    v1 = a0;
    if (v1 == 2) {
        t1 = classify_range_8c0e76d4((void *)((void *)0x8c46fec0));
        if (t1 == 0) {
            v1 = (int)3;
        } else {
            if (t1 == 1) {
                v1 = (int)4;
            } else {
                v1 = (int)0;
            }
        }
    }
    switch (v1) {
    case 0:
        operation_8c189994();
        break;
    case 1:
        operation_8c1c7208();
        break;
    case 3:
    case 4:
        operation_8c20784c();
    case 2:
        break;
    }
    g_8c4dbc64 = (int)(v1);
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x20);
    if (t2 != 0) {
        operation_8c189df4((void *)t2, (int)g_8c44be80);
    }
    g_8c4dbc60 = (int)(t2);
}
