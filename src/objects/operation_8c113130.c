typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x108];
    int f108;
};
extern int current_effect_mode(void);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c113130(Object *o)
{
    int t1;
    t1 = current_effect_mode();
    switch (t1) {
    case 1:
    case 2:
        if (o->f108 != 0) {
            if (o->f108 == 1) {
                goto L_8c1131c6;
            }
            return;
        }
        call_8c05fbf8(0x4000a, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
L_8c1131c6:;
        call_8c05fbf8(0x4000b, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 3:
    case 4:
    case 5:
        if (o->f108 != 0) {
            if (o->f108 == 1) {
                goto L_8c1131fa;
            }
            return;
        }
        call_8c05fbf8(0x40009, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
L_8c1131fa:;
        call_8c05fbf8(0x4000a, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 6:
    case 7:
        if (o->f108 != 0) {
            if (o->f108 == 1) {
                goto L_8c11322e;
            }
            return;
        }
        call_8c05fbf8(0x40003, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
L_8c11322e:;
        call_8c05fbf8(0x40004, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 8:
    case 9:
    case 10:
        if (o->f108 != 0) {
            if (o->f108 == 1) {
                goto L_8c113262;
            }
            return;
        }
        call_8c05fbf8(0x4000a, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
L_8c113262:;
        call_8c05fbf8(0x4000b, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 16:
    case 17:
        if (*(int *)0x8c2e2ad8 == 1) {
            if (o->f108 != 0) {
                if (o->f108 == 1) {
                    goto L_8c11329e;
                }
                return;
            }
            call_8c05fbf8(0x40001, (void *)(((char *)o + 0x3c)), 0, 0);
            return;
L_8c11329e:;
            call_8c05fbf8(0x40002, (void *)(((char *)o + 0x3c)), 0, 0);
        }
        return;
    case 0:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        break;
    }
}
