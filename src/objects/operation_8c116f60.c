typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x114];
    float f114;
    char unknown118[0x1e];
    char f136;
    char f137;
    char unknown138[0x404];
    int f53c;
    int f540;
    char unknown544[0x220];
    int f764;
    int f768;
    int f76c;
};
extern int call_8c117fec(Object *, int);
extern int call_8c1181ec(Object *, void *);
extern void set_fields_8c117e20(void *);
extern void call_8c117e34(Object *, void *, void *);
void operation_8c116f60(Object *o)
{
    char *v1;
    float v17;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    switch (o->f540) {
    case 7:
        if (((o->f53c & 2)) == 0) {
            o->f53c |= 2;
        } else {
            t1 = call_8c117fec(o, 5);
            if (t1 != 0) {
                *(int *)((char *)o + 0x764) += 1;
                v1 = (char *)o->f764;
                if (!((int)(v1) >= 5)) {
                    goto L_8c116ff8;
                }
                o->f764 = 4;
                o->f53c &= -3;
                o->f540 += 1;
                return;
            }
            t2 = call_8c117fec(o, 4);
            if (t2 != 0) {
                *(int *)((char *)o + 0x764) -= 1;
                if (!(o->f764 >= 0)) {
                    o->f764 = 0;
                    o->f53c &= -3;
                    o->f540 -= 1;
                    return;
                }
            }
        }
L_8c116ff8:;
        switch (o->f764) {
        case 0:
            t3 = call_8c1181ec(o, (void *)(((char *)o + 0x770)));
            if (t3 == 0) {
                return;
            }
            v17 = o->f114;
            if (v17 > 64.0f) {
                v17 = 64.0f;
            } else if (-64.0f > v17) {
                v17 = -64.0f;
            }
            o->f114 = v17;
            set_fields_8c117e20((void *)o);
            call_8c117e34(o, (void *)(((char *)o + 0xfc)), (void *)(((char *)o + 0x13c)));
            return;
        case 1:
            t4 = call_8c1181ec(o, (void *)(((char *)o + 0x798)));
            if (t4 == 0) {
                return;
            }
            set_fields_8c117e20((void *)o);
            call_8c117e34(o, (void *)(((char *)o + 0xfc)), (void *)(((char *)o + 0x13c)));
            return;
        case 2:
            t5 = call_8c1181ec(o, (void *)(((char *)o + 0x7c0)));
            if (t5 == 0) {
                return;
            }
            set_fields_8c117e20((void *)o);
            call_8c117e34(o, (void *)(((char *)o + 0xfc)), (void *)(((char *)o + 0x13c)));
            return;
        case 3:
            t6 = call_8c1181ec(o, (void *)(((char *)o + 0x7e8)));
            if (t6 == 0) {
                return;
            }
            if (o->f768 > 0xff) {
                o->f768 = 0xff;
            } else {
                if (!(o->f768 >= 0)) {
                    o->f768 = 0;
                }
            }
            o->f136 = o->f768;
            set_fields_8c117e20((void *)o);
            call_8c117e34(o, (void *)(((char *)o + 0xfc)), (void *)(((char *)o + 0x13c)));
            return;
        case 4:
            t7 = call_8c1181ec(o, (void *)(((char *)o + 0x808)));
            if (t7 != 0) {
                if (o->f76c > 0xff) {
                    o->f76c = 0xff;
                } else {
                    if (!(o->f76c >= 0)) {
                        o->f76c = 0;
                    }
                }
                o->f137 = o->f76c;
                set_fields_8c117e20((void *)o);
                call_8c117e34(o, (void *)(((char *)o + 0xfc)), (void *)(((char *)o + 0x13c)));
            }
            return;
        }
    }
}
