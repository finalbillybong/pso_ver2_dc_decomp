typedef struct {
    char b0, b1, b2, b3;
    char pad04[0x44];
    int v48;
    char pad4c[8];
    int v54;
    int v58;
    int v5c;
} Obj;

void obj_mark_8c34fa80(Obj *p)
{
    p->b3 = 1;
}

void obj_set_5c_8c34fa86(Obj *p, int v)
{
    p->v5c = v;
}

void obj_set_48_8c34fa8c(Obj *p, int v)
{
    p->v48 = v;
}

void obj_set_58_8c34fa92(Obj *p, int v)
{
    p->v58 = v;
}

void obj_set_54_8c34fa98(Obj *p, int v)
{
    p->v54 = v;
}
