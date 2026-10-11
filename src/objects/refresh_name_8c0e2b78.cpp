class Target {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual int special();
};
typedef struct Holder { char unknown0[0x20]; unsigned char *name; int value; } Holder;
extern "C" Target *lookup_low_id(int);
extern "C" void copy_name_8c0e2278(Holder *, unsigned char *, int);
static inline int compare_text(const unsigned char *p1, const unsigned char *p2)
{
    unsigned char c1, c2;
    while ((c1 = *p1++) == (c2 = *p2++))
        if (!c1) return 0;
    return c1 - c2;
}
extern "C" void refresh_name_8c0e2b78(Holder *o, int id)
{
    Target *target = lookup_low_id(id);
    unsigned char *info;
    if (!target) return;
    info = (unsigned char *)target + 0x7e4;
    if (!info) return;
    if (!info) return;
    if (!o->name || compare_text(o->name, info) != 0) copy_name_8c0e2278(o, info, 0x20);
    if (target->special()) o->value = 0xffff0000;
    else o->value = *(int *)(info + 0x18);
}
