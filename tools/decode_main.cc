// Thin wrapper: all game decoding is performed by pinned upstream newserv code.
#include "DCSerialNumbers.hh"
#include <phosg/Filesystem.hh>
#include <exception>
#include <cstdio>

int main(int argc, char** argv) {
  if (argc != 5) {
    std::fprintf(stderr, "usage: pso-decode executable values indexes output\n");
    return 2;
  }
  try {
    auto decoded = decrypt_dp_address_jpn(phosg::load_file(argv[1]),
        phosg::load_file(argv[2]), phosg::load_file(argv[3]));
    phosg::save_file(argv[4], decoded);
  } catch (const std::exception& e) {
    std::fprintf(stderr, "decode failed: %s\n", e.what());
    return 1;
  }
}
