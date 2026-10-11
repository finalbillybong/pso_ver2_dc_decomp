int player_flag9_8c026508(void)
{
    int id = *(int *)0x8c418248;
    char *player;
    int result;
    if (id == 0xffff) player = 0;
    else if (id >= 12) player = 0;
    else player = *(char **)(0x8c41ce2c + (id << 2));
    if (player) result = (*(int *)(player + 0x350) & 0x200) != 0;
    else result = 0;
    return result;
}
