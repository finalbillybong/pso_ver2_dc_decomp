typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41ccec S_L8c41ccec;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg2 Arg2;
typedef struct S_vv11 S_vv11;
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x10];
    Arg0_7c *f7c;
};
struct Arg0_7c {
    char unknown0[0xbc];
    int fbc;
};
struct S_L8c41ccec {
    char unknown0[0xe];
    unsigned char f0e;
};
struct Arg2 {
    unsigned short f00;
};
struct S_vv11 {
    int f00;
};
extern S_L8c41ccec g_8c41ccec;
extern int call_8c1e0e18(Object *);
int operation_8c1e0abc(Object *o, int a1, Arg2 *a2)
{
    int v5;
    int v1;
    int v6;
    S_vv11 *v11;
    int t1;
    v1 = (int)o->f68;
    if (((v1 & 1)) != 0) {
        v5 = (int)(v1 & 0x20);
    } else {
        if ((unsigned int)0x1d >= (unsigned int)(unsigned char)a1) {
            v5 = (int)(v1 & 0x20);
        } else {
            v5 = (int)(v1 & 0x80);
        }
    }
    v6 = (int)o->f7c->fbc;
    if (((v6 & 1)) == 0 || (&g_8c41ccec)->f0e != 1) {
        switch ((unsigned int)((&g_8c41ccec)->f0e)) {
        case 1:
            if (v5 != 0) {
                a2->f00 = *(unsigned char *)((char *)0x8c2f1fe8 + ((unsigned char)a1));
                break;
            }
            a2->f00 = *(unsigned char *)((char *)0x8c2f1f58 + ((unsigned char)a1));
            break;
        case 7:
            if (((v1 & 8)) != 0) {
                a2->f00 = *(unsigned char *)((char *)0x8c2f28e8 + ((unsigned char)a1));
                break;
            }
            if (v5 != 0) {
                a2->f00 = *(unsigned char *)((char *)0x8c2f2882 + ((unsigned char)a1));
                break;
            }
            a2->f00 = *(unsigned char *)((char *)0x8c2f281c + ((unsigned char)a1));
            break;
        case 5:
            if (((v1 & 8)) != 0) {
                a2->f00 = *(unsigned char *)((char *)0x8c2f2a1a + ((unsigned char)a1));
                break;
            }
            if (v5 != 0) {
                a2->f00 = *(unsigned char *)((char *)0x8c2f29b4 + ((unsigned char)a1));
                break;
            }
            a2->f00 = *(unsigned char *)((char *)0x8c2f294e + ((unsigned char)a1));
            break;
        case 4:
            if (((v1 & 8)) != 0) {
                a2->f00 = *(unsigned char *)((char *)0x8c2f27b6 + ((unsigned char)a1));
                break;
            }
            if (v5 != 0) {
                a2->f00 = *(unsigned char *)((char *)0x8c2f2750 + ((unsigned char)a1));
                break;
            }
            a2->f00 = *(unsigned char *)((char *)0x8c2f26ea + ((unsigned char)a1));
            break;
        case 3:
            if (((v1 & 8)) != 0) {
                a2->f00 = *(unsigned char *)((char *)0x8c2f2684 + ((unsigned char)a1));
                break;
            }
            if (v5 != 0) {
                a2->f00 = *(unsigned char *)((char *)0x8c2f261e + ((unsigned char)a1));
                break;
            }
            a2->f00 = *(unsigned char *)((char *)0x8c2f258e + ((unsigned char)a1));
            break;
        case 2:
        case 6:
        default:
            if (v5 != 0) {
                a2->f00 = *(unsigned char *)((char *)0x8c2f2528 + ((unsigned char)a1));
            } else {
                a2->f00 = *(unsigned char *)((char *)0x8c2f24c2 + ((unsigned char)a1));
            }
        }
L_8c1e0cd0:;
        if (((o->f7c->fbc & 1)) != 0) {
            v11 = (S_vv11 *)&o->f68;
            return ((v11->f00 & 0x80) != 0) ? 2 : 0;
        }
        return 1;
    }
    if (((v6 & 2)) != 0) {
        if (v5 != 0) {
            a2->f00 = *(volatile unsigned short *)((char *)0x8c2f2186 + ((unsigned char)a1 << 1)) & 0xffff;
        } else {
            a2->f00 = *(volatile unsigned short *)((char *)0x8c2f2072 + ((unsigned char)a1 << 1)) & 0xffff;
        }
        return 1;
    }
    if (((v6 & 4)) != 0) {
        if ((unsigned int)0x1d >= (unsigned int)(unsigned char)a1) {
            if (v5 != 0) {
                a2->f00 = *(unsigned char *)((char *)0x8c2f1fe8 + ((unsigned char)a1));
            } else {
                a2->f00 = *(unsigned char *)((char *)0x8c2f1f58 + ((unsigned char)a1));
            }
            if (((o->f68 & 0x80)) != 0) {
                return 2;
            }
            return 0;
        }
        if (v5 != 0) {
            a2->f00 = *(volatile unsigned short *)((char *)0x8c2f2186 + ((unsigned char)a1 << 1)) & 0xffff;
        } else {
            a2->f00 = *(volatile unsigned short *)((char *)0x8c2f2072 + ((unsigned char)a1 << 1)) & 0xffff;
        }
        return 1;
    }
    t1 = call_8c1e0e18(o);
    a2->f00 = t1;
    if (((o->f7c->fbc & 8)) == 0) {
        return 1;
    }
    if ((unsigned int)0x829f > (unsigned int)a2->f00) {
        return 1;
    }
    if ((unsigned int)a2->f00 > (unsigned int)0x82f1) {
        return 1;
    }
    if ((unsigned int)a2->f00 > (unsigned int)0x82dd) {
        a2->f00 += 1;
    }
    a2->f00 += 0xa1;
    return 1;
}
