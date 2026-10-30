typedef struct { int pad[8]; int v20; float f24; float f28; } Obj;
void set_20_8c34ff58(Obj *p, int v)
{
    p->v20 = v;
}

int get_20_8c34ff5c(Obj *p)
{
    return p->v20;
}

void set_24_8c34ff60(Obj *p, float v)
{
    p->f24 = v;
}

float get_24_8c34ff66(Obj *p)
{
    return p->f24;
}

void set_28_8c34ff6c(Obj *p, float v)
{
    p->f28 = v;
}

float get_28_8c34ff72(Obj *p)
{
    return p->f28;
}
