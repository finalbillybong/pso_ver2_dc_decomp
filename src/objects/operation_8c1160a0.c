typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct S_vv30 S_vv30;
typedef struct S_x12112 S_x12112;
typedef struct S_x12224 S_x12224;
typedef struct S_x79568 S_x79568;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x18];
    int f50;
    char unknown54[0x4e8];
    int f53c;
    int f540;
    char unknown544[0x14];
    int f558;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
};
struct S_x79568 {
    int f00;
};
struct S_vv30 {
    char unknown0[0x14];
    int f14;
};
struct S_x12224 {
    float f00;
};
struct S_x12112 {
    float f00;
};
extern S_L8c41cba0 g_8c41cba0;
extern int call_8c117fec(Object *, int);
extern void operation_8c1163f0(void *);
extern void operation_8c11649c(void *);
extern void operation_8c1165f0(void *);
extern void operation_8c116678(void *);
extern void operation_8c1166c4(void *);
extern void operation_8c116700(void *);
extern void call_8c11673c(Object *);
extern void call_8c1167a4(Object *);
extern void call_8c116bf4(Object *);
extern void operation_8c116f60(void *);
extern void operation_8c11635c(void *);
extern void operation_8c122380(void *, int);
extern void call_8c391c94(void);
extern void call_8c1171c8(Object *);
extern void call_8c391cc4(void);
void operation_8c1160a0(Object *o)
{
    int v1;
    int v6;
    int v7;
    S_vv30 *v30;
    int v32;
    int v33;
    int t1;
    int t2;
    if (((o->f53c & 4)) != 0) {
        o->f53c &= -5;
        return;
    }
    for (v1 = 0; 6 > v1; v1++) {
        v7 = v1 << 2;
        if (((*(int *)((char *)&g_8c41cba0.f20 + (o->f34 * 0x3c)) & *(int *)((char *)0x8c3103bc + v7))) != 0) {
            ((S_x79568 *)((char *)(int *)((char *)o + 0x828) + v7))->f00 += 1;
        } else {
            *(int *)((char *)((char *)o + 0x828) + v7) = 0;
        }
    }
    if (((o->f53c & 2)) == 0) {
        t1 = call_8c117fec(o, 5);
        if (t1 != 0) {
            *(int *)((char *)o + 0x540) += 1;
            v7 = (int)o->f540;
            if (!(v7 >= 8)) {
                goto L_8c11615a;
            }
            o->f540 = 0;
        } else {
            t2 = call_8c117fec(o, 4);
            if (t2 != 0) {
                *(int *)((char *)o + 0x540) -= 1;
                if (!(o->f540 >= 0)) {
                    o->f540 = 7;
                }
            }
        }
    }
L_8c11615a:;
    operation_8c1163f0((void *)o);
    operation_8c11649c((void *)o);
    operation_8c1165f0((void *)o);
    operation_8c116678((void *)o);
    operation_8c1166c4((void *)o);
    operation_8c116700((void *)o);
    call_8c11673c(o);
    if (o->f558 != 0) {
        if (o->f558 == 1) {
            goto L_8c1161a2;
        }
        if (o->f558 == 2) {
            goto L_8c1161ac;
        }
    } else {
        call_8c1167a4(o);
        goto L_8c1161b2;
L_8c1161a2:;
        call_8c116bf4(o);
        goto L_8c1161b2;
L_8c1161ac:;
        operation_8c116f60((void *)o);
    }
L_8c1161b2:;
    operation_8c11635c((void *)o);
    if (((o->f53c & 1)) != 0) {
        o->f53c = (unsigned int)o->f53c >> 1 << 1;
        if (o->f558 != 0) {
            if (o->f558 == 1) {
                goto L_8c1161e8;
            }
            if (o->f558 == 2) {
                goto L_8c1161f0;
            }
        } else {
            v30 = (S_vv30 *)((char *)o + 0x7c);
            goto L_8c1161f6;
L_8c1161e8:;
            v30 = (S_vv30 *)((char *)o + 0xbc);
            goto L_8c1161f6;
L_8c1161f0:;
            v30 = (S_vv30 *)((char *)o + 0xfc);
        }
L_8c1161f6:;
        o->f50 = (int)(v30->f14);
        for (v32 = 0; 8 > v32; v32++) {
            v33 = v32 << 2;
            ((S_x12224 *)((char *)(int *)((char *)o + 0x54) + v33))->f00 = ((S_x12112 *)((int)v30 + 0x18 + v33))->f00;
            *(char *)((char *)((char *)o + 0x74) + (v32)) = *(unsigned char *)((char *)((char *)v30 + 0x38) + (v32));
        }
        operation_8c122380((void *)(((char *)o + 0x3c)), 1);
    }
    call_8c391c94();
    call_8c1171c8(o);
    call_8c391cc4();
}
