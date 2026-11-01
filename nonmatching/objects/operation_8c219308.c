/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c219308
 * function: operation_8c219308
 * language: c
 * reference size: 596 bytes
 * compiled size: 596 bytes (+0.0%)
 * differing lines: 90 of 255 reference instruction lines
 * differing bytes: 335
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c50590c S_g8c50590c;
typedef struct S_g8c50590c_10 S_g8c50590c_10;
typedef struct S_g8c50590c_24 S_g8c50590c_24;
typedef struct S_g8c50590c_3c S_g8c50590c_3c;
typedef struct S_g8c50590c_40 S_g8c50590c_40;
typedef struct S_g8c50590c_44 S_g8c50590c_44;
typedef struct S_g8c50590c_4c S_g8c50590c_4c;
typedef struct Arg2 Arg2;
struct Arg2 {
    unsigned char f00;
    char f01;
    unsigned char f02;
    char unknown3[0x1];
    char f04;
    char unknown5[0xb];
    int f10;
};
struct S_g8c50590c {
    char unknown0[0x10];
    S_g8c50590c_10 *f10;
    char unknown14[0x10];
    S_g8c50590c_24 *f24;
    char unknown28[0x14];
    S_g8c50590c_3c *f3c;
    S_g8c50590c_40 *f40;
    S_g8c50590c_44 *f44;
    char f48;
    char unknown49[0x3];
    S_g8c50590c_4c *f4c;
};
struct Frame {
    char unknown0[0x10];
};
extern void call_8c218e74(int, int, Arg2 *);
extern float operation_8c2198e8(void *, unsigned int);
extern void call_8c219c54(int, int, Arg2 *);
extern void operation_1c7dd4(void *);
extern void operation_8c2191ec(int, void *);
extern int call_8c218c14(int, void *, int, int, int);
extern int call_8c218c94(int, void *, int, int, int);
extern void operation_8c158a24(int, Arg2 *);
extern int operation_8c218d18(int, void *, int, int, int);
extern void operation_8c1c74a8(void *, int);
extern int operation_8c219834(void *, int, unsigned int);
extern void initialize_fields_8c207358(void *);
extern void call_8c1c8d90(Arg2 *, Frame *);
extern void item_drop_check_quest_restriction_8c219e54(int, void *);
void operation_8c219308(int a0, int a1, Arg2 *a2)
{
    Frame frame;
    unsigned char v63;
    float v1;
    unsigned int v4;
    unsigned short v13;
    int v14;
    unsigned short v16;
    int v18;
    float t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    if (a2 == 0) {
        return;
    }
    v63 = (unsigned char)a2->f00;
    switch ((unsigned char)v63) {
    case 0:
        call_8c218e74(a0, a1, a2);
        break;
    case 1:
        if ((unsigned char)a2->f01 == 3) {
            v1 = (float)((float)*(unsigned char *)((char *)((char *)(*(S_g8c50590c **)0x8c50590c)->f4c + 0x0) + (a1)) + 1.0f);
            t1 = operation_8c2198e8((void *)a0, (unsigned int)0xe);
            call_8c219c54(a0, (int)((int)(v1 * t1)), a2);
            if ((unsigned char)a2->f02 != 0xff) {
                goto L_8c219504;
            }
            operation_1c7dd4((void *)a2);
            goto L_8c219504;
        }
        operation_8c2191ec(a0, (void *)a2);
        t2 = call_8c218c14(a0, (void *)((*(S_g8c50590c **)0x8c50590c)->f10), 0, 5, 1);
        a1 = (int)(a1 + t2);
        a2->f02 = (unsigned char)(*(S_g8c50590c **)0x8c50590c)->f48 + a1;
        v4 = (unsigned int)v4;
        if ((unsigned int)3 > v4) {
            a2->f02 = 0;
            goto L_8c219504;
        }
        a2->f02 -= 3;
        break;
    case 3:
        operation_1c7dd4((void *)a2);
        t3 = call_8c218c94(a0, (void *)((*(S_g8c50590c **)0x8c50590c)->f3c), a1, 0x1c, 0xa);
        operation_8c158a24((int)((unsigned char)t3), a2);
        if ((unsigned char)a2->f01 == 2) {
            t4 = call_8c218c14(a0, (void *)((*(S_g8c50590c **)0x8c50590c)->f40), a1, 0x13, 0xa);
            a2->f04 = t4;
            t5 = operation_8c218d18(a0, (void *)((*(S_g8c50590c **)0x8c50590c)->f44), (int)((unsigned char)a2->f04), a1, 0xa);
            a2->f02 = t5;
            if ((unsigned char)a2->f01 == 2) {
                if (!((unsigned int)(unsigned char)a2->f04 >= (unsigned int)0x13)) {
                    if (!((unsigned int)(unsigned char)a2->f02 >= (unsigned int)0x1e)) {
                        goto L_8c21947c;
                    }
                }
                operation_1c7dd4((void *)a2);
            }
        }
L_8c21947c:;
        if (a2->f00 != 3) {
            goto L_8c219504;
        }
        operation_8c1c74a8((void *)a2, 1);
        break;
    case 4:
        v13 = (unsigned short)((unsigned short)*(short *)((char *)((char *)(*(S_g8c50590c **)0x8c50590c)->f24 + 0x0) + (a1 << 1 << 1)));
        if ((unsigned short)v13 != 0xff) {
            v14 = (int)(unsigned short)((unsigned short)*(short *)((char *)((char *)(*(S_g8c50590c **)0x8c50590c)->f24 + 0x2) + (a1 << 1 << 1)));
            if (v14 != 0xff) {
                if (!((unsigned int)(unsigned short)v13 > v14)) {
                    goto L_8c2194c0;
                }
            }
        }
        v18 = (int)0xff;
        goto L_8c2194d8;
L_8c2194c0:;
        if ((unsigned short)v13 == v14) {
            v18 = (int)v13;
        } else {
            v16 = (unsigned short)(unsigned short)v13;
            t6 = operation_8c219834((void *)a0, (int)(v14 - v16 + 1), (unsigned int)5);
            v18 = (int)(t6 + v16);
        }
L_8c2194d8:;
        a2->f10 = (unsigned short)v18;
        break;
    case 2:
        if (v63 != 2) {
            goto L_8c219504;
        }
        initialize_fields_8c207358((void *)(&frame));
        a2->f01 = 0;
        call_8c1c8d90(a2, (Frame *)((&frame)));
        break;
    default:
        operation_1c7dd4((void *)a2);
        a2->f00 = 5;
    }
L_8c219504:;
    item_drop_check_quest_restriction_8c219e54(a0, (void *)a2);
}
