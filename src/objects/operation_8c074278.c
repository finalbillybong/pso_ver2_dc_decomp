typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct S_g8c4db9ec S_g8c4db9ec;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_x59088 S_x59088;
struct S_x59088 {
    Block24 f00;
};
struct S_vv4 {
    Block24 f00;
};
struct S_g8c4db9ec {
    char unknown0[0xb];
    char f0b;
};
struct Object {
    char unknown0[0x244];
    int f244;
};
extern int call_8c18de4c(int);
extern void operation_8c15b1e4(void *);
extern int call_8c073ffc(S_vv4 *);
extern void call_8c12b77c(void *, int, int);
extern void call_8c18de08(int);
void operation_8c074278(Object *o)
{
    int t1;
    S_vv4 *v4;
    int v5;
    int v3;
    int v1;
    int v2;
    int t2;
    if (o != 0) {
        t1 = call_8c18de4c(0x5a0);
        if (t1 != 0) {
            v1 = (int)0;
            while (v1 != 0x3c) {
                operation_8c15b1e4((void *)(t1 + v1 * 0x18));
                v1 = (int)(v1 + 1);
            }
            v2 = (int)0;
            v3 = (int)0x244;
            v4 = (S_vv4 *)((char *)o + 0x24c);
            v5 = (int)0;
            while (*(int *)((char *)((char *)o + 0x0) + (v3)) != (unsigned char)v5) {
                t2 = call_8c073ffc(v4);
                if (t2 == 0) {
                    *(Block24 *)&((S_x59088 *)(t1 + (unsigned char)v2++ * 0x18))->f00 = *(Block24 *)&v4->f00;
                } else {
                    if (*(int *)0x8c4db9ec != 0) {
                        (*(S_g8c4db9ec **)0x8c4db9ec)->f0b |= 0x10;
                    }
                }
                v5 = (int)(v5 + 1);
                v4 = (S_vv4 *)((char *)v4 + 24);
            }
            o->f244 = (unsigned char)v2;
            call_8c12b77c((void *)(((char *)o + 0x24c)), t1, 0x5a0);
        }
        call_8c18de08(t1);
    }
}
