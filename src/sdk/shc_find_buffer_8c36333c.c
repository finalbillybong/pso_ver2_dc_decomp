/* SDK pool group 0x8c36333c-0x8c36336e (Hitachi SHC): returns the free buffer
   inside the current block when the stream has no pending data. */
typedef struct Stream {
    int unknown0[0x10];
    int pending;
} Stream;

typedef struct Device {
    char unknown0[0x2774];
    char area[0x56b4 - 0x2774];
    char *block;
} Device;

char *find_buffer_8c36333c(Device *device)
{
    char *q = device->area + 0xa80;
    Stream *stream = (Stream *)(q + 8);
    if (!device->block) goto none;
    if (stream->pending <= 0) goto found;
none:
    return 0;
found:
    return device->block + 0xabc;
}
