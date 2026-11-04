/* Static data 8c3047f8-8c304cb8: record_table objects, in address order. */

typedef struct { float unknown_00; float unknown_04; float unknown_08; int unknown_0c; int unknown_10; int unknown_14; int unknown_18; int unknown_1c; int unknown_20; int unknown_24; char name[16]; int unknown_38; int unknown_3c; } TechniqueParameters;

/* Technique parameters: one 64-byte record per technique, named at +0x28 (FOIE ... MEGID,
   the 19 DC v2 techniques). Field meanings other than the name are not established; the
   columns hold floats at +0x00..+0x08, small integers at +0x10..+0x1c, angles in 1/65536
   turns at +0x20/+0x24 (0x1c71 = 40 degrees, 0x10000 = 360). */
const TechniqueParameters technique_table_8c3047f8[19] = {
    { 110.0f, 5.0f, 100.0f, 0, 4, 5, 40, 1, 5461, 7281, "FOIE", 15, 1 },
    { 260.0f, 4.0f, 50.0f, 0, 21, 7, 100, 1, 65536, 0, "GIFOIE", 20, 10 },
    { 400.0f, 0.0f, 100.0f, 0, 30, 13, 133, 1, 7281, 0, "RAFOIE", 25, 10 },
    { 45.0f, 3.0f, 90.0f, 0, 6, 5, 35, 2, 9102, 0, "BARTA", 15, 1 },
    { 190.0f, 0.0f, 120.0f, 0, 21, 7, 100, 2, 20024, 0, "GIBARTA", 20, 10 },
    { 270.0f, 0.0f, 60.0f, 0, 30, 13, 106, 2, 65536, 0, "RABARTA", 25, 10 },
    { 90.0f, 0.0f, 100.0f, 0, 4, 5, 44, 3, 32768, 16384, "ZONDE", 15, 1 },
    { 240.0f, 0.0f, 80.0f, 0, 21, 7, 100, 3, 16384, 16384, "GIZONDE", 20, 10 },
    { 370.0f, 0.0f, 110.0f, 0, 30, 13, 134, 3, 65536, 16384, "RAZONDE", 25, 10 },
    { 1180.0f, 0.0f, 150.0f, 0, 30, 15, 160, 4, 32768, 16384, "GRANTS", 35, 1 },
    { 0.0f, 0.0f, 17.0f, 0, 10, 5, 60, 10, 0, 0, "DEBAND", 30, 10 },
    { 0.0f, 0.0f, 50.0f, 0, 10, 5, 60, 11, 32768, 16384, "JELLN", 15, 10 },
    { 0.0f, 0.0f, 50.0f, 0, 10, 5, 60, 12, 32768, 16384, "ZARUA", 15, 10 },
    { 0.0f, 0.0f, 17.0f, 0, 10, 5, 60, 9, 0, 0, "SIFTA", 30, 10 },
    { 0.0f, 0.0f, 10.0f, 0, 10, 20, 150, 14, 0, 0, "LUCKER", 20, 0 },
    { 50.0f, 0.0f, 15.0f, 0, 15, 7, 50, 6, 0, 0, "RESTA", 20, 10 },
    { 0.0f, 0.0f, 15.0f, 0, 10, 7, 85, 7, 0, 0, "ANTI", 20, 10 },
    { 0.0f, 0.0f, 100.0f, 0, 20, 10, 150, 8, 0, 0, "REVERSER", 30, 1 },
    { 45.0f, 2.0f, 100.0f, 0, 30, 15, 160, 5, 7281, 7281, "MEGID", 35, 1 }
};
