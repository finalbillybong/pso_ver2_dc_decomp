/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d6b7c
 * function: operation_8c1d6b7c
 * language: c++
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 16 of 115 reference instruction lines
 * differing bytes: 16
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
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
};
struct Frame {
    char unknown0[0x20];
    int f20;
};
struct Arg1 {
    unsigned char f00;
    char f01;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)(int);
extern "C" void operation_8c1d6b7c(Object *o, Arg1 *a1, PMF_0 pmf)
{
    char *v12;
    char *v13;
    char *v14;
    unsigned int v6;
    int v1;
    char *v2;
    char *v3;
    char *v4;
    int v5;
    v1 = (int)o->f30->f00;
    v12 = (char *)o->f30->f04;
    v2 = (char *)v12;
    v13 = (char *)o->f30->f08;
    v3 = (char *)v13;
    v14 = (char *)o->f30->f0c;
    v4 = (char *)v14;
    v5 = (int)o->f30->f10;
    (((PmfObj *)(v1))->*pmf)(0);
    (((PmfObj *)(v2))->*pmf)(0);
    (((PmfObj *)(v3))->*pmf)(0);
    (((PmfObj *)(v4))->*pmf)(0);
    if (a1 != 0) {
        v6 = (unsigned int)0;
        while ((unsigned int)3 > v6) {
            switch ((unsigned char)a1->f00) {
            case 1:
                (((PmfObj *)(v1))->*pmf)(a1->f01);
                break;
            case 2:
                (((PmfObj *)(v2))->*pmf)(a1->f01);
                break;
            case 3:
                (((PmfObj *)(v3))->*pmf)(a1->f01);
                break;
            case 4:
                (((PmfObj *)(v4))->*pmf)(a1->f01);
                break;
            case 5:
                (((PmfObj *)(v5))->*pmf)(a1->f01);
            }
            v6 = (unsigned int)(v6 + 1);
            a1 = (Arg1 *)((char *)a1 + 2);
        }
    }
}
