#ifndef PSO_SPATIAL_H
#define PSO_SPATIAL_H
/* Provisional layouts inferred from 8c045f04 accesses, not original types. */
typedef struct Vec3 { float x, y, z; } Vec3;
typedef struct ContactEntry {
    Vec3 position;
    float radius;
    unsigned char unknown_10[8];
    unsigned int flags;
    unsigned char unknown_1c[16];
} ContactEntry;
typedef struct ContactLimits {
    unsigned char unknown_0[8];
    float radius;
    int angle_limit;
} ContactLimits;
struct SpatialObject;
typedef struct SpatialVtable {
    unsigned char unknown_0[0x78];
    int (*contact)(struct SpatialObject *, struct SpatialObject *, int, float);
} SpatialVtable;
typedef struct SpatialObject {
    unsigned char unknown_0[0x18];
    SpatialVtable *vtable;
    unsigned char unknown_1c[0x20];
    Vec3 position;
    unsigned char unknown_48[0x1c];
    int angle;
    unsigned char unknown_68[0x74];
    ContactEntry *contacts;
    int contact_count;
    unsigned char unknown_e4[0x258];
    ContactLimits *limits;
} SpatialObject;
#define SPATIAL_OFFSET(t, f) ((unsigned long)&((t *)0)->f)
typedef char check_contact_size[sizeof(ContactEntry) == 0x2c ? 1 : -1];
typedef char check_contact_flags[SPATIAL_OFFSET(ContactEntry, flags) == 0x18 ? 1 : -1];
typedef char check_spatial_position[SPATIAL_OFFSET(SpatialObject, position) == 0x3c ? 1 : -1];
typedef char check_spatial_angle[SPATIAL_OFFSET(SpatialObject, angle) == 0x64 ? 1 : -1];
typedef char check_spatial_contacts[SPATIAL_OFFSET(SpatialObject, contacts) == 0xdc ? 1 : -1];
typedef char check_spatial_count[SPATIAL_OFFSET(SpatialObject, contact_count) == 0xe0 ? 1 : -1];
typedef char check_spatial_limits[SPATIAL_OFFSET(SpatialObject, limits) == 0x33c ? 1 : -1];
#endif
