typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c026058 S_c8c026058;
typedef struct Object Object;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_0 S_vv8_0;
struct S_c8c026058 {
    int f00;
};
struct Object {
    char unknown0[0x4e4];
    int f4e4;
};
struct S_vv8 {
    S_vv8_0 *f00;
};
extern S_c8c026058 *call_8c026058(void *);
extern int select_member_8c026104(void *, int);
extern int call_8c029104(Object *, int, int, int);
extern int call_8c028fe8(Object *, int, int);
extern void call_8c24766c(void *);
int operation_8c028ccc(Object *o, int a1)
{
    int v1;
    int v2;
    int v5;
    S_vv8 *v8;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    S_c8c026058 *t15;
    t15 = call_8c026058((void *)(((char *)o + 0x418)));
    v1 = (int)(((t15->f00 & 1)) != 0);
    if (v1 != 0) {
        v2 = (int)(o->f4e4 == 0);
        if (v2 != 0) {
            v8 = (S_vv8 *)((char *)o + 0x4c0);
            goto L_8c028d10;
        }
        v5 = (int)&o->f4e4;
    } else {
        v5 = (int)((char *)o + 0x4c0);
    }
    v8 = (S_vv8 *)v5;
L_8c028d10:;
    t1 = select_member_8c026104((void *)v8, (int)(v8->f00));
    switch ((unsigned short)*(unsigned char *)((char *)t1 + (a1 << 2) + 0x1)) {
    case 0:
        t2 = call_8c029104(o, 3, 0, 0);
        return (int)(t2);
    case 1:
        t3 = call_8c029104(o, 3, 0, 1);
        return (int)(t3);
    case 2:
        t4 = call_8c029104(o, 3, 0, 2);
        return (int)(t4);
    case 3:
        t5 = call_8c029104(o, 3, 1, 0);
        return (int)(t5);
    case 4:
        t6 = call_8c029104(o, 3, 1, 1);
        return (int)(t6);
    case 5:
        t7 = call_8c029104(o, 3, 1, 2);
        return (int)(t7);
    case 6:
        t8 = call_8c029104(o, 3, 6, 0);
        return (int)(t8);
    case 7:
        t9 = call_8c029104(o, 3, 6, 1);
        return (int)(t9);
    case 8:
        t10 = call_8c028fe8(o, 3, 3);
        return (int)(t10);
    case 9:
        t11 = call_8c028fe8(o, 3, 4);
        return (int)(t11);
    case 10:
        call_8c24766c((void *)(((char *)o + 0x3bc)));
        t12 = call_8c028fe8(o, 3, 5);
        return (int)(t12);
    case 11:
        t13 = call_8c028fe8(o, 3, 7);
        return (int)(t13);
    case 12:
        t14 = call_8c028fe8(o, 3, 8);
        return (int)(t14);
    default:
        return 0;
    }
}
