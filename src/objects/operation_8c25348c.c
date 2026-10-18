typedef struct Block Block;
struct Block {
    short f00[0x382];
};
void operation_8c25348c(Block *o)
{
    *(Block *)0x8c511164 = *o;
    *(int *)0x8c511160 |= 1;
}
