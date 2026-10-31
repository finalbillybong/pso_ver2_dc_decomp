typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct S_vv7 S_vv7;
struct S_vv7 {
    char unknown0[0x4];
    unsigned short f04;
    char unknown6[0x36];
    float f3c;
    char unknown40[0x18];
    int f58;
    char unknown5c[0x20];
    int f7c;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
extern int g_8c418248;
extern S_g8c4dbde0 *g_8c4dbde0;
extern int lookup_low_id(int);
extern int word_operation_8c02ab64(void *);
extern void operation_8c0dc79c(void *);
extern void operation_8c0dc710(void *);
void operation_8c0dd018(Object *o)
{
    int v2;
    float v1;
    unsigned int v6;
    int t1;
    int v8;
    unsigned short v9;
    S_vv7 *v7;
    int v10;
    int v11;
    int v3;
    int v4;
    float v5;
    int t2;
    v1 = (float)103.0f;
    v2 = (int)0x308;
    v3 = (int)0x5f8;
    v5 = (float)v1;
    v6 = (unsigned int)0;
    v4 = (int)0xffff;
    while ((unsigned int)3 > v6) {
        v7 = (S_vv7 *)*(Arg0_38 **)((char *)((char *)o + 0x38) + (v6 << 2));
        if (v7 != 0 && ((v7->f04 & 4)) == 0) {
            t1 = lookup_low_id((int)(g_8c418248 + v7->f7c + 1 & 3));
            if (t1 != 0) {
                if (g_8c4dbde0 == 0) {
                    v8 = (int)0;
                } else {
                    v8 = (int)(g_8c4dbde0->f20 & 1);
                }
                if (v8 == 0) {
                    v9 = (unsigned short)o->f20;
                    if (((v9 & 1)) == 0 && ((v9 & 0x80)) == 0) {
                        v10 = (int)(*(short *)((char *)((char *)t1 + 0x0) + (v2)) == 6);
                        if (v10 == 0) {
                            v11 = (int)(*(short *)((char *)((char *)t1 + 0x0) + (v2)) == 3);
                            if (v11 == 0) {
                                goto L_8c0dd0d2;
                            }
                            t2 = word_operation_8c02ab64((void *)t1);
                            if (t2 == 0 && (*(unsigned short *)((char *)((char *)t1 + 0x0) + (v3)) & 0xffff) != (unsigned short)v4) {
                                goto L_8c0dd0d2;
                            }
                        }
                    }
                }
            }
            operation_8c0dc79c((void *)v7);
            goto L_8c0dd0f0;
L_8c0dd0d2:;
            operation_8c0dc710((void *)v7);
            if (v7->f3c != v5) {
                v7->f3c = v5;
                v7->f58 = 0xf;
            }
            v5 = (float)(v5 + 43.0f);
        }
L_8c0dd0f0:;
        v6 = (unsigned int)(v6 + 1);
    }
}
