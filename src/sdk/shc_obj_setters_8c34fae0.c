typedef struct {
    char pad00[0x3c];
    int v3c;
    char pad40[0x10];
    int v50;
    char pad54[0xc];
    int v60;
    int v64;
    int v68;
    int v6c;
    int v70;
    int v74;
    int v78;
    int v7c;
} Obj;

void obj_set_50_8c34fae0(Obj *p, int v)
{
    p->v50 = v;
}

void obj_set_60_8c34fae6(Obj *p, int v)
{
    p->v3c = v;
    p->v60 = v;
}

void obj_set_64_8c34faee(Obj *p, int v)
{
    p->v64 = v;
}

void obj_set_6c_8c34faf4(Obj *p, int v)
{
    p->v6c = v;
}

void obj_set_68_8c34fafa(Obj *p, int v)
{
    p->v68 = v;
}

void obj_set_70_8c34fb00(Obj *p, int v)
{
    p->v70 = v;
}

void obj_set_74_8c34fb06(Obj *p, int v)
{
    p->v74 = v;
}

void obj_set_78_8c34fb0c(Obj *p, int v)
{
    p->v78 = v;
}

void obj_set_7c_8c34fb12(Obj *p, int v)
{
    p->v7c = v;
}
