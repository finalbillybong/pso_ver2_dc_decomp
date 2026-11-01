/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c074174
 * function: operation_8c074174
 * language: c
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 4 of 118 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block28 {
    int words[7];
} Block28;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_x77616 S_x77616;
struct Object {
    unsigned char tag;
    char unknown1[0x6];
    char f07;
};
struct S_x77616 {
    Block28 f00;
};
struct S_vv4 {
    Block28 f00;
};
extern int operator_new_8c18de4c(int);
extern void operation_1c7dd4(void *);
extern int operation_8c073ffc(void *);
extern void memcpy_8c12b77c(void *, int, int);
extern void operator_delete_8c18de08(int);
void operation_8c074174(Object *o)
{
    int t1;
    int j;
    int flag;
    S_vv4 *src;
    int k;
    int m1;
    int i;
    int off;
    if (o != 0) {
        t1 = operator_new_8c18de4c(0x348);
        if (t1 != 0) {
            j = 0;
            m1 = -1;
            for (; j != 0x1e; j++) {
                *(char *)((char *)t1 + (j * 0x1c)) = 0;
                *(char *)((char *)((char *)t1 + 0x1) + (j * 0x1c)) = m1;
                *(int *)((char *)((char *)t1 + 0x4) + (j * 0x1c)) = 0;
                *(char *)((char *)((char *)t1 + 0x3) + (j * 0x1c)) = 0;
                *(char *)((char *)((char *)t1 + 0x2) + (j * 0x1c)) = 0;
                operation_1c7dd4((void *)(t1 + j * 0x1c + 8));
            }
            flag = 0;
            src = (S_vv4 *)((char *)o + 0x4);
            k = flag;
            for (i = flag; (unsigned char)i != (unsigned char)o->tag; i++, src = (S_vv4 *)((char *)src + 28)) {
                if (operation_8c073ffc((void *)((int)src + 8)) == 0) {
                    off = (unsigned char)k * 0x1c;
                    *(Block28 *)&((S_x77616 *)(t1 + off))->f00 = *(Block28 *)&src->f00;
                    *(char *)((char *)((char *)t1 + 0x2) + off) = 0;
                    *(char *)((char *)((char *)t1 + 0x3) + off) = 0;
                    k++;
                } else {
                    flag = 1;
                }
            }
            o->tag = k;
            memcpy_8c12b77c((void *)(((char *)o + 0x4)), t1, 0x348);
            if (flag == 1) {
                o->f07 |= 0x10;
            }
        }
        operator_delete_8c18de08(t1);
    }
}
