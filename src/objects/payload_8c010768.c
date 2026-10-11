char *payload_8c010768(char *o)
{
    return o + *(short *)(o + 0x2e) + 0x74;
}
