/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c116bf4
 * function: operation_8c116bf4
 * language: c
 * reference size: 876 bytes
 * compiled size: 876 bytes (+0.0%)
 * differing lines: 80 of 324 reference instruction lines
 * differing bytes: 54
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
typedef struct EF_68c_int {
    char pad[0x68c];
    int f;
} EF_68c_int;
typedef struct EF_6f8_int {
    char pad[0x6f8];
    int f;
} EF_6f8_int;
typedef struct Object Object;
struct Object {
    char unknown0[0xd0];
    int fd0;
    float fd4;
    char unknownd8[0x464];
    int f53c;
    int f540;
    char unknown544[0xa4];
    int f5e8;
};
extern int call_8c117fec(Object *, int);
extern int operation_8c1181ec(void *, void *);
extern void set_fields_8c117e20(void *);
extern int call_8c11806c(Object *);
extern void call_8c117e34(Object *, void *, void *);
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
static inline void clamp255(int *v)
{
    if (!(*v >= 0)) {
        *v = 0;
    } else if (*v >= 0x100) {
        *v = 0xff;
    }
}
void operation_8c116bf4(Object *o)
{
    int t;
    int row;
    int k;
    float f;
    int *p;
    if (o->f540 != 7) {
        return;
    }
    if ((o->f53c & 2) == 0) {
        o->f53c |= 2;
    } else if (call_8c117fec(o, 5) != 0) {
        *(int *)((char *)o + 0x5e8) += 1;
        if (o->f5e8 >= 0xb) {
            o->f5e8 = 0xa;
            o->f53c &= -3;
            o->f540 += 1;
            return;
        }
    } else if (call_8c117fec(o, 4) != 0) {
        *(int *)((char *)o + 0x5e8) -= 1;
        if (!(o->f5e8 >= 0)) {
            o->f5e8 = 0;
            o->f53c &= -3;
            o->f540 -= 1;
            return;
        }
    }
    switch (o->f5e8) {
    case 0:
        if (operation_8c1181ec(o, (char *)o + 0x5ec) == 0) {
            return;
        }
        f = o->fd4;
        if (f > 64.0f) {
            f = 64.0f;
        } else if (-64.0f > f) {
            f = -64.0f;
        }
        o->fd4 = f;
        set_fields_8c117e20(o);
        return;
    case 1:
        t = call_8c11806c(o);
        if (t == 0) {
            return;
        }
        if (t >= 1) {
            *(int *)((char *)o + 0xd0) += 1;
            if (o->fd0 >= 4) {
                o->fd0 = 0;
            }
        } else if (-1 >= t) {
            *(int *)((char *)o + 0xd0) -= 1;
            if (!(o->fd0 >= 0)) {
                o->fd0 = 3;
            }
        }
        call_8c117e34(o, (char *)o + 0xbc, (char *)o + 0x13c);
        set_fields_8c117e20(o);
        return;
    }
    k = o->f5e8 + -2;
    row = call_8c18e768(k, 3);
    switch (call_8c18e8a0(k, 3)) {
    case 0:
        if (operation_8c1181ec(o, (char *)o + row * 0x28 + 0x614) == 0) {
            return;
        }
        call_8c117e34(o, (char *)o + 0xbc, (char *)o + 0x13c);
        set_fields_8c117e20(o);
        return;
    case 1:
        if (operation_8c1181ec(o, (char *)o + (row << 5) + 0x698) != 0) {
            p = (int *)((char *)o + (row << 2) + 0x68c);
            clamp255(p);
            *(char *)((char *)((char *)o + 0xf6) + (row << 1)) = *p;
            call_8c117e34(o, (char *)o + 0xbc, (char *)o + 0x13c);
            set_fields_8c117e20(o);
        }
        return;
    case 2:
        if (operation_8c1181ec(o, (char *)o + (row << 5) + 0x704) != 0) {
            p = (int *)((char *)o + (row << 2) + 0x6f8);
            clamp255(p);
            *(char *)((char *)((char *)o + 0xf7) + (row << 1)) = *p;
            call_8c117e34(o, (char *)o + 0xbc, (char *)o + 0x13c);
            set_fields_8c117e20(o);
        }
        return;
    }
}
