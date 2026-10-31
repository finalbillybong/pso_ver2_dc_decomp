/* SDK pool group 0x8c36dd5c (Hitachi SHC): with interrupts masked, fills a
   transfer channel descriptor (addresses, length, flags, callback). */
typedef struct Channel {
    int unknown0;
    unsigned int src;
    unsigned int dst;
    unsigned int length;
    int mode;
    int flags;
    int unknown18;
    int callback;
    int callback_arg;
    int unknown24[3];
    int status;
} Channel;
int setup_channel_8c36dd5c(Channel *ch, unsigned int src, unsigned int dst, unsigned int length,
                           int mode, int f0, int f2, int callback, int callback_arg)
{
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    ch->src = src & 0x1fffffe0;
    ch->dst = dst & 0x1fffffe0;
    ch->length = length & 0x1ffffe0 | 0x80000000;
    ch->mode = mode & 1;
    if (f0 == 1) ch->flags |= 1;
    else ch->flags &= ~1;
    if (f2 == 1) ch->flags |= 4;
    else ch->flags &= ~4;
    ch->flags &= 7;
    ch->callback = callback;
    ch->callback_arg = callback_arg;
    ch->status = 0;
    _builtin_set_imask(old);
    return ch->status;
}
