#ifndef PSO_RESOURCE_CHUNKS_H
#define PSO_RESOURCE_CHUNKS_H
/* Provisional observed views. The first paired allocation uses only the first
 * 40 bytes of ResourceChunks; the second allocation includes the entire view. */
typedef struct ResourceTexture {void *data;int unknown4,unknown8;} ResourceTexture;
typedef struct ResourceTextureList {ResourceTexture *entries;int count;} ResourceTextureList;
typedef struct ResourceChunks {
    void *buffer,*handle;
    int source,field_c,ready;
    void *dispatch;
    int state;
    unsigned int flags;
    int argument;
    char *output;
    ResourceTextureList *textures;
    void *models[4];
    void *motion;
} ResourceChunks;
typedef char check_ResourceTexture_data[(unsigned long)&((ResourceTexture *)0)->data == 0 ? 1 : -1];
typedef char check_ResourceTexture_unknown4[(unsigned long)&((ResourceTexture *)0)->unknown4 == 4 ? 1 : -1];
typedef char check_ResourceTexture_unknown8[(unsigned long)&((ResourceTexture *)0)->unknown8 == 8 ? 1 : -1];
typedef char check_ResourceTexture_prefix[sizeof(ResourceTexture) == 12 ? 1 : -1];
typedef char check_ResourceTextureList_entries[(unsigned long)&((ResourceTextureList *)0)->entries == 0 ? 1 : -1];
typedef char check_ResourceTextureList_count[(unsigned long)&((ResourceTextureList *)0)->count == 4 ? 1 : -1];
typedef char check_ResourceTextureList_prefix[sizeof(ResourceTextureList) == 8 ? 1 : -1];
typedef char check_ResourceChunks_buffer[(unsigned long)&((ResourceChunks *)0)->buffer == 0 ? 1 : -1];
typedef char check_ResourceChunks_handle[(unsigned long)&((ResourceChunks *)0)->handle == 4 ? 1 : -1];
typedef char check_ResourceChunks_source[(unsigned long)&((ResourceChunks *)0)->source == 8 ? 1 : -1];
typedef char check_ResourceChunks_field_c[(unsigned long)&((ResourceChunks *)0)->field_c == 12 ? 1 : -1];
typedef char check_ResourceChunks_ready[(unsigned long)&((ResourceChunks *)0)->ready == 16 ? 1 : -1];
typedef char check_ResourceChunks_dispatch[(unsigned long)&((ResourceChunks *)0)->dispatch == 20 ? 1 : -1];
typedef char check_ResourceChunks_state[(unsigned long)&((ResourceChunks *)0)->state == 24 ? 1 : -1];
typedef char check_ResourceChunks_flags[(unsigned long)&((ResourceChunks *)0)->flags == 28 ? 1 : -1];
typedef char check_ResourceChunks_argument[(unsigned long)&((ResourceChunks *)0)->argument == 32 ? 1 : -1];
typedef char check_ResourceChunks_output[(unsigned long)&((ResourceChunks *)0)->output == 36 ? 1 : -1];
typedef char check_ResourceChunks_textures[(unsigned long)&((ResourceChunks *)0)->textures == 40 ? 1 : -1];
typedef char check_ResourceChunks_models[(unsigned long)&((ResourceChunks *)0)->models == 44 ? 1 : -1];
typedef char check_ResourceChunks_motion[(unsigned long)&((ResourceChunks *)0)->motion == 60 ? 1 : -1];
typedef char check_ResourceChunks_prefix[sizeof(ResourceChunks) == 64 ? 1 : -1];
#endif
