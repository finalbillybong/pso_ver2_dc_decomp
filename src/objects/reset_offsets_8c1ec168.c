typedef struct Mover { char unknown0[0xe8]; int flags; char unknownec[0x22c]; float x; float y; float z; } Mover;
void reset_offsets_8c1ec168(Mover *o)
{
    o->z = 0.0f;
    o->y = 0.0f;
    o->x = 0.0f;
    o->flags &= ~0x40;
}
