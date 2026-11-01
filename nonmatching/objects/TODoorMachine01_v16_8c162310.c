/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c162310
 * function: TODoorMachine01_v16_8c162310
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 10 of 218 reference instruction lines
 * differing bytes: 5
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
typedef struct Object Object;
typedef struct Arg0_100 Arg0_100;
typedef struct S_vv38 S_vv38;
typedef struct S_x77520 S_x77520;
typedef struct S_x78416 S_x78416;
typedef struct S_x78864 S_x78864;
struct Object {
    char unknown0[0x100];
    Arg0_100 *f100;
    int f104;
    int f108;
    int f10c;
};
struct S_x77520 {
    int f00;
};
struct S_vv38 {
    int f00;
};
struct S_x78864 {
    int f00;
};
struct S_x78416 {
    int f00;
};
extern void operation_8c0ef1cc(void *);
extern int operation_03d080(unsigned short);
void TODoorMachine01_v16_8c162310(Object *o)
{
    int v36;
    int v35;
    int v34;
    int v33;
    S_vv38 *v38;
    int v39;
    int v49;
    int v50;
    int pm6;
    int v52;
    int t1;
    char *pm5;
    char *pm4;
    switch (o->f104) {
        case 1:
        operation_8c0ef1cc((void *)o);
        o->f108 = 0xf0001 | o->f108;
        o->f10c = 4;
        return;
        case 2:
        *(int *)((char *)o + 0x108) &= -0xf0001;
        pm4 = (char *)o;
        pm5 = (pm4 + 0x0);
        v33 = 0x110;
        if (!(*(int *)((v33) + pm5) != 1)) {
            t1 = operation_03d080((unsigned short)(o->f100));
            if (!(1 != (unsigned char)t1)) {
                o->f10c = 4;
                o->f108 = 0xf0000 | o->f108;
                goto L_8c1623e6;
            }
            o->f10c = 0;
        } else {
            t1 = 0x100;
            v34 = (int)0x10c;
            v36 = (int)0;
            *(int *)((v34) + (0x0 + (char *)o)) = (4 - (int)*(int *)((char *)(0x0 + (char *)o) + (v33)));
            v35 = t1;
            for (; *(int *)((char *)((char *)o + 0x0) + (v33)) > v36; ) {
                int t2;
                pm5 = (char *)o + 0x0;
                t2 = operation_03d080((unsigned short)((*(int *)((pm5) + (v35))) + v36));
                if (!((unsigned char)t2 != 1)) {
                    ((S_x77520 *)((int)o + v34))->f00 += 1;
                }
                v36 += 1;
            }
            v38 = (S_vv38 *)&o->f108;
            v39 = 0;
            while (o->f10c > v39) {
                v38->f00 |= 1 << v39 + 0x10;
                v34 = v39 + 1;
                v36 = (v34);
                v39 = v36;
            }
        }
    L_8c1623e6:
        ;
        if (4 == o->f10c) {
            operation_8c0ef1cc((void *)o);
            o->f108 |= 1;
            return;
        }
        o->f108 = (int)((unsigned int)o->f108 >> 1 << 1);
        return;
        case 3:
        v49 = 0x110;
        if (!(*(int *)((char *)((char *)o + 0x0) + (v49)) != 1)) {
            int t3;
            t3 = operation_03d080((unsigned short)(o->f100));
            if ((unsigned char)t3 == 1) {
                o->f10c = 4;
                o->f108 |= 0xf0000;
                goto L_8c16248c;
            }
            o->f10c = 0;
        } else {
            int v53;
            int v51;
            v33 = 0x10c;
            v51 = (int)0x100;
            v53 = 0;
            v39 = (*(int *)(((char *)o + 0x0) + (v49)));
            v50 = v33;
            v52 = (int)0x108;
            v36 = v39;
            for (*(int *)((char *)(((char *)o + 0x0)) + (v50)) = 4 - v36; *(int *)((char *)(0x0 + (char *)o) + (v49)) > v53; v53 = (int)(v53 + 1)) {
                v39 = (int)*(int *)((v51) + (0x0 + (char *)o));
                pm6 = operation_03d080((unsigned short)(v39 + v53));
                if (1 == (unsigned char)pm6) {
                    ((S_x78864 *)((int)o + v50))->f00 += 1;
                    ((S_x78416 *)((int)o + v52))->f00 |= 1 << v53 + 0x10;
                }
            }
        }
    L_8c16248c:
        ;
        v49 = o->f10c;
        v33 = v49;
        if (v33 != 4) {
            return;
        }
        operation_8c0ef1cc((void *)o);
        o->f108 = o->f108 | 1;
        return;
        default:
        o->f108 = o->f108 & -0xf0002;
        return;
    }
}
