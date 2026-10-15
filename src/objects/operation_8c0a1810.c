typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct S_L8c46efc8 {
    char unknown0[0x1];
    unsigned char f01;
    char unknown2[0x6];
    int f08;
};
struct Object {
    char unknown0[0x20];
    int f20;
};
extern S_g8c418248 *g_8c418248;
extern S_L8c46efc8 g_8c46efc8;
extern void call_8c0a19c4(int);
extern int lookup_low_id(int);
extern void call_8c0a1b78(int);
void operation_8c0a1810(Object *o)
{
    char *v30;
    int t1;
    v30 = (char *)(&g_8c46efc8)->f08;
    if ((((int)(v30) & 4)) == 0 && (((int)(v30) & 8)) == 0) {
    } else {
        if ((((int)(v30) & 0x20)) == 0 && (((int)(v30) & 0x80)) == 0 && (((int)(v30) & 0x800)) == 0) {
            return;
        }
    }
    if ((((int)(v30) & 2)) != 0) {
        call_8c0a19c4((int)((int)o->f20 + 6));
        return;
    }
    if ((((int)(v30) & 0x20)) == 0 && (((int)(v30) & 0x80)) == 0) {
        return;
    }
    call_8c0a19c4((int)((&g_8c46efc8)->f01));
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        call_8c0a1b78(t1);
    }
}
