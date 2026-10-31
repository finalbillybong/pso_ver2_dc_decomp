# Provenance and licensing status

This is an independent source-reconstruction project for Phantasy Star Online
Ver. 2. Sega and Sonic Team names identify the original game; this project is
not affiliated with or endorsed by them.

Game asset files, disc images, original executables, SDK/compiler distributions
and personal registration information are not included. Reconstructed sources
include the executable's own typed static data where it has been matched (virtual
tables and string literals, see docs/DATA.md); embedded files and opaque data are
not reproduced. No disassembly is included either: hand-written routines and the
not-decompiled fallback for unmatched code are generated locally from your own
dump at build time (docs/ASM.md) and are never committed or distributed. The
remaining untyped bytes are likewise listed by range and hash only and taken from
your own dump at build time (docs/DATA.md, dump extracts).
Downloaded tools remain separate
local dependencies with their own licensing terms. The decoder and encoder
wrappers use separately fetched, pinned newserv and phosg sources; see the setup
scripts and those upstream projects for their licenses.

No repository-wide license has been selected yet. Public availability alone is
not a grant of an open-source license. This notice does not relicense the original
game, third-party tools or upstream code.
