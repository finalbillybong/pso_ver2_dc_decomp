typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    short f00;
};
extern int call_8c18c96c(int, int, short);
extern void operation_8c18cd8c(void *, int);
extern void operation_8c18caac(void *);
void operation_8c18c904(Object *o, S_vv1 *a1, int a2)
{
    int v3;
    int v2;
    int v5;
    int t1;
    v2 = (int)a2;
    v3 = (int)0;
    while (6 > (short)v2) {
        if (a1->f00 == 0x16) {
            goto L_8c18c94c;
        }
        t1 = call_8c18c96c((int)(o), v3, a1->f00);
        v5 = (int)v2;
        if (t1 != 0) {
            *(int *)((char *)((char *)o + 0x58) + ((short)v2 << 2)) = (int)(t1);
            operation_8c18cd8c((void *)t1, v2);
            v5 = (int)(v2 + 1);
        }
        v2 = (int)v5;
        a1 = (S_vv1 *)((char *)a1 + 8);
        v3 = (int)(v3 + 1);
    }
L_8c18c94c:;
    operation_8c18caac((void *)o);
}
