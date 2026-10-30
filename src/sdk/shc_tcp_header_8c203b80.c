/* Library pool group 0x8c203b80 (Hitachi SHC): builds a TCP header (ports,
   sequence numbers, data offset, flags, window, checksum, urgent pointer and
   an MSS or copied option block) into a newly allocated message. */
typedef struct Message {
    unsigned char *data;
} Message;

typedef struct Connection {
    short source_port;
    short destination_port;
    int sequence;
    int acknowledge;
    short window;
    short checksum_seed;
    short urgent;
    unsigned short mss;
    char unknown14;
    char fin_urg;
    char ack;
    char psh;
    char rst;
    char syn;
    char fin;
    unsigned char option_length;
    unsigned char options[40];
} Connection;

typedef struct Header {
    short source_port;
    short destination_port;
    int sequence;
    int acknowledge;
    unsigned char offset;
    unsigned char flags;
    short window;
    short checksum;
    short urgent;
    unsigned char options[40];
} Header;

typedef struct Packet {
    char unknown0[10];
    short length;
} Packet;

extern Message *message_alloc_8c1fc430(int, int);
extern short swap16_8c1fbf48(short);
extern int swap32_8c1fbf5a(int);
extern short checksum_8c1fc240(Packet *, Message *, int);
extern void *memcpy(void *, const void *, unsigned int);

Message *build_tcp_header_8c203b80(Connection *connection, int owner, Packet *packet)
{
    int length;
    Message *message;
    unsigned char *out;
    Header header;
    Header *h;
    unsigned char flags;
    length = 0;
    if (connection->option_length > 0 && connection->option_length <= 40) length = connection->option_length;
    else if (connection->mss) length = 4;
    length += 20;
    message = message_alloc_8c1fc430(owner, length);
    if (!message) return 0;
    h = &header;
    out = message->data;
    h->source_port = swap16_8c1fbf48(connection->source_port);
    h->destination_port = swap16_8c1fbf48(connection->destination_port);
    h->sequence = swap32_8c1fbf5a(connection->sequence);
    h->acknowledge = swap32_8c1fbf5a(connection->acknowledge);
    h->offset = (unsigned short)length << 2;
    flags = 0;
    if (connection->fin_urg) flags = 0x20;
    if (connection->ack) flags |= 0x10;
    if (connection->psh) flags |= 8;
    if (connection->rst) flags |= 4;
    if (connection->syn) flags |= 2;
    if (connection->fin) flags |= 1;
    h->flags = flags;
    h->window = swap16_8c1fbf48(connection->window);
    if (packet == 0) h->checksum = swap16_8c1fbf48(connection->checksum_seed);
    else h->checksum = 0;
    h->urgent = swap16_8c1fbf48(connection->urgent);
    if ((unsigned short)length > 20) {
        if (connection->mss) {
            h->options[0] = 2;
            h->options[1] = 4;
            h->options[2] = connection->mss >> 8;
            h->options[3] = connection->mss;
        } else {
            /* The reference copies to offset 2 of the option area, as observed. */
            memcpy(h->options + 2, connection->options, connection->option_length);
        }
    }
    memcpy(out, h, (unsigned short)length);
    if (packet) h->checksum = swap16_8c1fbf48(checksum_8c1fc240(packet, message, packet->length));
    memcpy(out, h, (unsigned short)length);
    return message;
}
