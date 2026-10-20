typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c285330 S_L8c285330;
typedef struct S_g8c285330 S_g8c285330;
typedef struct Object Object;
typedef struct S_vv6_0 S_vv6_0;
typedef struct S_vv8_0 S_vv8_0;
typedef struct S_vv9_0 S_vv9_0;
typedef struct S_vv9_0_0 S_vv9_0_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    int f24;
    char unknown28[0x18];
    short f40;
};
typedef struct Entry {
    int id;
    int pad;
} Entry;
typedef struct Row {
    Entry *list;
    unsigned int count;
} Row;
extern Row g_8c285330[];
extern int create_effect(void *, int, int);
extern void bind_id(void *, unsigned short);
extern int call_8c18e8a0(int, int);
void operation_8c0b0630(Object *o)
{
    int v1;
    int v4;
    int v2;
    unsigned int v10;
    int v9;
    int t1;
    v1 = o->f24;
    switch (v1) {
    case 0:
        v2 = 0x11;
        break;
    case 1:
        v2 = 0x14;
        break;
    case 2:
        v2 = 0x15;
        break;
    }
    v4 = o->f20;
    if (v2 > v4) {
        switch (v1) {
        case 0:
            if (v4 == 1) {
                t1 = create_effect((char *)o + 0x28, (*(Row *)((char *)g_8c285330 + (v1 << 3))).list->id, 0x10);
                if (t1 != 0) {
                    bind_id((void *)t1, o->f40);
                }
            }
            break;
        case 1:
            if (call_8c18e8a0(v4, 0xa) == 0) {
                t1 = create_effect((char *)o + 0x28, (*(Row *)((char *)g_8c285330 + (v1 << 3))).list->id, 0x10);
                if (t1 != 0) {
                    bind_id((void *)t1, o->f40);
                }
            }
            break;
        case 2:
            if (call_8c18e8a0(v4, 7) == 0) {
                t1 = create_effect((char *)o + 0x28, (*(Row *)((char *)g_8c285330 + (v1 << 3))).list->id, 0x10);
                if (t1 != 0) {
                    bind_id((void *)t1, o->f40);
                }
            }
            break;
        }
    } else {
        v10 = 1;
        while (*(unsigned int *)((char *)&g_8c285330[0].count + (v9 = o->f24 << 3)) > v10) {
            t1 = create_effect((char *)o + 0x34, (*(Entry *)((char *)(*(Row *)((char *)g_8c285330 + v9)).list + (v10 << 3))).id, 0x10);
            if (t1 != 0) {
                bind_id((void *)t1, o->f40);
            }
            v10++;
        }
        o->f04 |= 1;
    }
    o->f20 += 1;
}
