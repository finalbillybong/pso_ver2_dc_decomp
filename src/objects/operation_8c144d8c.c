typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x78112 S_x78112;
struct S_x78112 {
    int f00;
};
extern int operation_8c05bbf8(void);
extern float operation_8c05b8c0(int);
extern void send_code_8c14472c(void *, int);
void operation_8c144d8c(Object *o)
{
    int v3;
    int v4;
    int v7;
    int v1;
    int v2;
    int v10;
    int t1;
    float t2;
    float t3;
    float t4;
    v1 = (int)0x3f0;
    v2 = (int)0x678;
    do {
        v3 = (int)0;
        ((S_x78112 *)((int)o + v1))->f00 += 1;
        t1 = operation_8c05bbf8();
        if (t1 != 0) {
            v7 = (int)*(int *)((char *)0x8c314dc0 + (*(int *)((char *)((char *)o + 0x0) + (v1)) << 2));
        } else {
            v4 = (int)*(int *)((char *)0x8c314d10 + (*(int *)((char *)((char *)o + 0x0) + (v1)) << 2));
            v7 = (int)v4;
        }
        switch (v7) {
        case 33:
            t2 = operation_8c05b8c0((int)(o));
            if (t2 > 0.0f) {
                v10 = (int)8;
                goto L_8c144ec4;
            }
            v7 = (int)6;
            break;
        case 34:
            if (*(int *)((char *)((char *)o + 0x0) + (v2)) == 0) {
                v10 = (int)5;
                goto L_8c144ec4;
            }
            v7 = (int)9;
            break;
        case 35:
            t3 = ((float (*)(int, int))operation_8c05b8c0)((int)(o), v7);
            if (t3 > 0.0f) {
                v10 = (int)0xc;
                goto L_8c144ec4;
            }
            v7 = (int)0xe;
            break;
        case 36:
            if (*(int *)((char *)((char *)o + 0x0) + (v2)) == 0) {
                v10 = (int)3;
                goto L_8c144ec4;
            }
            v7 = (int)0xb;
            break;
        case 37:
            t4 = ((float (*)(int, int))operation_8c05b8c0)((int)(o), v7);
            if (t4 > 0.0f) {
                v10 = (int)0x18;
                goto L_8c144ec4;
            }
            v7 = (int)0x19;
            break;
        case 39:
            if (*(int *)((char *)((char *)o + 0x0) + (v2)) == 0) {
                v10 = (int)4;
                goto L_8c144ec4;
            }
            v7 = (int)0xa;
            break;
        case 40:
            if (*(int *)((char *)((char *)o + 0x0) + (v2)) == 0) {
                v10 = (int)0x10;
                goto L_8c144ec4;
            }
            v7 = (int)0x11;
            break;
        case 41:
            if (*(int *)((char *)((char *)o + 0x0) + (v2)) == 0) {
                v10 = (int)0x12;
                goto L_8c144ec4;
            }
            v7 = (int)0x13;
            break;
        case 42:
            if (*(int *)((char *)((char *)o + 0x0) + (v2)) == 0) {
                v10 = (int)0x14;
                goto L_8c144ec4;
            }
            v7 = (int)0x15;
            break;
        case 43:
            if (*(int *)((char *)((char *)o + 0x0) + (v2)) == 0) {
                v10 = (int)0x16;
                goto L_8c144ec4;
            }
            v7 = (int)0x17;
            break;
        case 44:
            *(int *)((char *)((char *)o + 0x0) + (v1)) = 5;
            v3 = (int)1;
        case 38:
            break;
        }
        v10 = (int)v7;
L_8c144ec4:;
    } while (v3 != 0);
    send_code_8c14472c((void *)o, v10);
}
