typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv4 S_vv4;
typedef struct S_x29776 S_x29776;
struct Frame {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    char unknown2c[0x14];
};
struct S_vv4 {
    unsigned short f00;
};
extern void initialize_hierarchy_node(void *, void *);
extern void destroy_hierarchy_node(void *, short);
typedef struct Hdr {
    int f00;
    unsigned int f04;
    char unknown8[0x8];
    int f10;
} Hdr;
int operation_8c09ae10(int a0, int a1)
{
    char *p;
    unsigned int n;
    Hdr *hdr;
    unsigned short *q;
    unsigned int pm2;
    int r;
    int pm5;
    Frame frame;
    int pm4;
    unsigned int pm3;
    unsigned int i;
    int pm1;
    int pm6;
    initialize_hierarchy_node((void *)(&frame), (void *)0);
    frame.f18 = (void *)0x8c26586c;
    frame.f20 = a0;
    frame.f24 = a1;
    p = (char *)frame.f20;
    hdr = (Hdr *)(p + frame.f24 - 0x20);
    i = (unsigned int)0;
    a0 = hdr->f00;
    pm4 = a0;
    pm2 = hdr->f04;
    n = pm2;
    pm6 = frame.f20;
    q = (unsigned short *)((pm4 + pm6));
    for (; n > i; ) {
        i += 1;
        pm1 = *q++ << 2;
        pm5 = pm1;
        a1 = pm5;
        p = (a1 + p);
        *(int *)p += frame.f20;
    }
    frame.f28 = hdr->f10 + frame.f20;
    r = frame.f28;
    pm3 = 0x8c26586c;
    frame.f18 = (void *)pm3;
    destroy_hierarchy_node((void *)(&frame), (short)0);
    return r;
}
