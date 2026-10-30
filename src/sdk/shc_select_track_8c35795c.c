/* SDK pool group 0x8c35795c (Hitachi SHC): selects one of an object's 0x28-byte
   tracks, refreshes its state and re-sends every 32-byte block. */
typedef struct Track {
    char unknown0[0x28];
} Track;

typedef struct Block {
    char unknown0[0x20];
} Block;

typedef struct Player {
    char unknown0[8];
    char active;
    char unknown9[0xb];
    void *device;
    char unknown18[8];
    int track_count;
    char unknown24[0x9c - 0x24];
    int block_count;
    Block *blocks;
    char unknowna4[0x2e4 - 0xa4];
    char state[0x350 - 0x2e4];
    Track *current;
    char unknown354[0x3a4 - 0x354];
    Track tracks[1];
} Player;

extern void update_8c3bb160(void *);
extern void finish_8c3bb920(void *);
extern void reset_device_8c3bdd40(void *);
extern void send_block_8c3bdda4(void *, Block *, int, int);

void select_track_8c35795c(Player *player, int index)
{
    int i;
    if (!player->active) return;
    goto device;
device:
    if (!player->device) return;
    if (index < 0 || index >= player->track_count) return;
    {
        int offset = index * 0x28;
        player->current = (Track *)((char *)player->tracks + offset);
    }
    update_8c3bb160(player->state);
    finish_8c3bb920(player->state);
    reset_device_8c3bdd40(player->device);
    for (i = 0; i < player->block_count; i++)
        send_block_8c3bdda4(player->device, &player->blocks[i], 3, 0x20);
}
