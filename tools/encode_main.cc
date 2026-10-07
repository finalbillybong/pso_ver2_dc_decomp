// Test-disc packaging wrapper around pinned newserv routines.
#include "DCSerialNumbers.hh"
#include "PSOEncryption.hh"
#include <phosg/Filesystem.hh>
#include <cstdio>
#include <exception>
#include <stdexcept>

int main(int argc, char** argv) {
  if (argc != 6) {
    std::fprintf(stderr, "usage: pso-encode decoded values indexes packed-out indexes-out\n");
    return 2;
  }
  try {
    const auto executable = phosg::load_file(argv[1]);
    const auto values = phosg::load_file(argv[2]);
    auto encoded = encrypt_dp_address_jpn(executable, phosg::load_file(argv[3]));
    // Upstream selects a random PR2 seed. Rewrap its compressed stream using
    // a fixed seed so identical decoded input produces identical test packages.
    auto pr2 = decrypt_pr2_data<false>(encoded.executable);
    encoded.executable = encrypt_pr2_data<false>(pr2.compressed_data, executable.size(), 0x01020304);
    if (decrypt_dp_address_jpn(encoded.executable, values, encoded.indexes) != executable) {
      throw std::runtime_error("encoded executable failed decode round-trip");
    }
    phosg::save_file(argv[4], encoded.executable);
    phosg::save_file(argv[5], encoded.indexes);
    std::printf("Packed %zu bytes into %zu bytes; decode round-trip exact\n",
        executable.size(), encoded.executable.size());
  } catch (const std::exception& e) {
    std::fprintf(stderr, "encode failed: %s\n", e.what());
    return 1;
  }
}
