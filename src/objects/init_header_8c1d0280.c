typedef struct Header { int value; char unknown4[0x1a]; short kind; } Header;
void init_header_8c1d0280(Header *o)
{
    o->value = *(int *)0x8c329940;
    o->kind = 0x9c;
}
