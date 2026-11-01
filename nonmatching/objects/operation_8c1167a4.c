/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1167a4
 * function: operation_8c1167a4
 * language: c
 * reference size: 1048 bytes
 * compiled size: 1048 bytes (+0.0%)
 * differing lines: 122 of 401 reference instruction lines
 * differing bytes: 61
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
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_5e0 Arg0_5e0;
typedef struct S_x83376 S_x83376;
typedef struct S_x83504 S_x83504;
typedef struct S_x83888 S_x83888;
typedef struct S_x85168 S_x85168;
typedef struct S_x85296 S_x85296;
typedef struct S_x86576 S_x86576;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x58];
    int f90;
    char unknown94[0x4ac];
    int f540;
    char unknown544[0x9c];
    int f5e0;
    float f5e4;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
};
struct S_x83504 {
    float f00;
};
struct S_x83376 {
    float f00;
};
struct S_x83888 {
    float f00;
};
struct S_x85296 {
    float f00;
};
struct S_x85168 {
    float f00;
};
struct S_x86576 {
    float f00;
};
extern S_L8c41cba0 g_8c41cba0;
extern int call_8c11812c(Object *);
extern int scene_control_horizontal_hold(void *);
extern int operation_8c116bbc(Object *, void *, void *);
extern void call_8c117e34(Object *, void *, void *);
extern void set_fields_8c117e20(void *);
extern int call_8c11806c(Object *);
extern int scene_control_vertical_hold(void *);
#define CB20(o) (*(int *)((char *)&g_8c41cba0.f20 + ((o)->f34 * 0x3c)))
#define CB28(o) (*(int *)((char *)&g_8c41cba0.f28 + ((o)->f34 * 0x3c)))
#define B4(o) ((unsigned char *)((char *)(o) + 0xb4))
#define B5(o) ((unsigned char *)((char *)(o) + 0xb5))
#define F94(o, k) (*(float *)((char *)((char *)(o) + 0x94) + ((k) << 2)))
#define F98(o, k) (*(float *)((char *)((char *)(o) + 0x98) + ((k) << 2)))
void operation_8c1167a4(Object *o)
{
    int v;
    int h;
    int sel;
    unsigned int i;
    unsigned int cnt;
    int k;
    unsigned char c;
    int n;
    int r;
    int j;
    int pos;
    int m1;
    if (o->f540 != 7) {
        return;
    }
    v = call_8c11812c(o);
    h = scene_control_horizontal_hold((void *)o);
    if ((CB20(o) & 0x400) != 0) {
        if (v == 0) {
            goto L_next;
        }
        if (v < 0) {
            sel = 0x85;
            cnt = o->f90;
            for (i = 0; i < cnt; i++) {
                c = B4(o)[i];
                if (c > o->f5e0) {
                    sel = c;
                    break;
                }
            }
            if (sel == 0x85) {
                sel = 0x7f;
            }
        } else if (v > 0) {
            sel = 0x85;
            for (k = o->f90 - 1; k >= 0; k--) {
                c = B4(o)[k];
                if (o->f5e0 > c) {
                    sel = c;
                    break;
                }
            }
            if (sel == 0x85) {
                sel = 0;
            }
        }
        o->f5e0 = sel;
    } else if (h != 0) {
        h *= -5;
        if (h >= 1) {
            *(int *)((char *)o + 0x5e0) += 1;
            if (o->f5e0 >= 0x80) {
                o->f5e0 = 0;
            }
        } else if (-1 >= h) {
            *(int *)((char *)o + 0x5e0) += -1;
            if (o->f5e0 < 0) {
                o->f5e0 = 0x7f;
            }
        }
    } else if (v != 0) {
        v = -v;
        if (v >= 1) {
            *(int *)((char *)o + 0x5e0) += 1;
            if (o->f5e0 >= 0x80) {
                o->f5e0 = 0;
            }
        } else if (-1 >= v) {
            *(int *)((char *)o + 0x5e0) += -1;
            if (o->f5e0 < 0) {
                o->f5e0 = 0x7f;
            }
        }
    }
L_next:;
    if ((CB20(o) & 0x400) == 0 && (CB28(o) & 4) != 0) {
        n = o->f90;
        r = operation_8c116bbc(o, (void *)((char *)o + 0x7c), (void *)o->f5e0);
        if (r == 0x85) {
            if (8 > n) {
                pos = n;
                for (k = 0; k < n; k++) {
                    c = B4(o)[k];
                    if (c > o->f5e0) {
                        pos = k;
                        break;
                    }
                }
                for (n--; n >= pos; n--) {
                    B5(o)[n] = B4(o)[n];
                    F98(o, n) = F94(o, n);
                }
                B4(o)[pos] = o->f5e0;
                F94(o, pos) = o->f5e4;
                o->f90 += 1;
            }
        } else {
            for (j = r; j < n; j++) {
                B4(o)[j] = B5(o)[j];
                F94(o, j) = F98(o, j);
            }
            m1 = -1;
            B4(o)[n + m1] = 0x85;
            n--;
            F94(o, n) = 0.0f;
            o->f90 -= 1;
        }
        call_8c117e34(o, (void *)((char *)o + 0x7c), (void *)((char *)o + 0x13c));
        set_fields_8c117e20((void *)o);
    }
    if ((CB20(o) & 0x400) == 0) {
        v = call_8c11806c(o);
        if (scene_control_vertical_hold((void *)o) != 0) {
            o->f5e4 += (float)v * 0.05f;
            set_fields_8c117e20((void *)o);
        } else if (v != 0) {
            o->f5e4 += (float)v * 0.01f;
            set_fields_8c117e20((void *)o);
        }
        if (0.0f > o->f5e4) {
            o->f5e4 = 0.0f;
        } else if (o->f5e4 > 1.0f) {
            o->f5e4 = 1.0f;
        }
    }
}
