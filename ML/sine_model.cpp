
// This is a TensorFlow Lite model file that has been converted into a C data
// array using the tensorflow.lite.util.convert_bytes_to_c_source() function.
// This form is useful for compiling into a binary for devices that don't have a
// file system.

#include "sine_model.h"

// We need to keep the data array aligned on some architectures.
#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

const unsigned char sine_model[] DATA_ALIGN_ATTRIBUTE = {
    0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00, 0x1c,
    0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00,
    0x00, 0xf0, 0x00, 0x00, 0x00, 0x0c, 0x07, 0x00, 0x00, 0x1c, 0x07, 0x00, 0x00,
    0x50, 0x0c, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00,
    0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00,
    0x00, 0x3c, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76,
    0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x90, 0xff, 0xff, 0xff, 0x09, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e,
    0x73, 0x65, 0x5f, 0x32, 0x31, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x86, 0xf9, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x0e,
    0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x39, 0x5f, 0x69,
    0x6e, 0x70, 0x75, 0x74, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0xdc, 0xff, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4e, 0x56, 0x45,
    0x52, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x4d, 0x45, 0x54, 0x41, 0x44, 0x41, 0x54,
    0x41, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00,
    0x00, 0x0b, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
    0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x76,
    0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x18, 0x06,
    0x00, 0x00, 0x10, 0x06, 0x00, 0x00, 0xfc, 0x05, 0x00, 0x00, 0xa4, 0x05, 0x00,
    0x00, 0x54, 0x05, 0x00, 0x00, 0x04, 0x05, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00,
    0xa4, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x8c,
    0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x36, 0xfa,
    0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x0e, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08,
    0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0xea, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c,
    0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x32,
    0x2e, 0x31, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x9a, 0xfa, 0xff, 0xff, 0x04, 0x00,
    0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0xf5, 0xff, 0xff,
    0x8c, 0xf5, 0xff, 0xff, 0x90, 0xf5, 0xff, 0xff, 0xc2, 0xfa, 0xff, 0xff, 0x04,
    0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x4c, 0x08, 0x86, 0xbe, 0x71, 0x0e,
    0x09, 0x3d, 0x66, 0xd7, 0x6e, 0xbf, 0xfa, 0x4b, 0x01, 0xbf, 0x17, 0xbc, 0xa5,
    0x3e, 0x37, 0xef, 0xac, 0x3f, 0x2a, 0xc0, 0xab, 0x3e, 0x36, 0x69, 0x00, 0x3f,
    0x84, 0x30, 0x8f, 0x3d, 0x31, 0xde, 0x65, 0xbf, 0xd0, 0xff, 0xa8, 0xbe, 0x09,
    0x79, 0xc5, 0xbc, 0xaf, 0x46, 0x05, 0x3f, 0xbd, 0x8b, 0x6e, 0xbf, 0x7b, 0xf6,
    0x03, 0x3f, 0x15, 0x83, 0x7b, 0x3f, 0x0e, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x10, 0xa6, 0xd3, 0xbd, 0xb3, 0xf5, 0x93, 0xbe,
    0x62, 0x6e, 0x9f, 0xbe, 0x56, 0xd7, 0x3d, 0x3e, 0x24, 0xa2, 0xa7, 0xbe, 0xd4,
    0x6a, 0xa6, 0x3c, 0xca, 0x5a, 0x69, 0x3e, 0x40, 0x14, 0x97, 0xbc, 0x73, 0xd8,
    0x90, 0x3e, 0x82, 0xf5, 0x14, 0xbe, 0x11, 0x34, 0x6b, 0x3e, 0xbc, 0x01, 0xd8,
    0x3e, 0xb8, 0x40, 0x43, 0xbe, 0xb2, 0x70, 0x73, 0x3e, 0x53, 0x83, 0xba, 0xbe,
    0x57, 0x15, 0xae, 0x3e, 0x12, 0x88, 0x5a, 0xbd, 0x51, 0x8f, 0x2c, 0x3e, 0xa2,
    0x8e, 0x59, 0x3e, 0x54, 0x31, 0x10, 0xbe, 0x6d, 0xec, 0xd4, 0xbd, 0xf2, 0x26,
    0x9c, 0xbb, 0x27, 0x61, 0x4e, 0xbe, 0xd7, 0x25, 0x85, 0x3e, 0x8d, 0xa5, 0xbd,
    0x3d, 0x80, 0x87, 0x25, 0xbc, 0xa8, 0xed, 0xb4, 0xbe, 0xb2, 0xea, 0x08, 0x3e,
    0x43, 0xe8, 0x88, 0xbe, 0xcf, 0xd8, 0x17, 0xbe, 0x28, 0x29, 0xc4, 0x3e, 0x1c,
    0x54, 0xcd, 0x3d, 0x68, 0xea, 0xde, 0xbe, 0x11, 0xbe, 0xc2, 0xbe, 0x94, 0x4e,
    0xe3, 0x3d, 0x34, 0xd3, 0x3a, 0xbe, 0xa8, 0x3e, 0xb5, 0xbe, 0x28, 0x32, 0x11,
    0xbf, 0x60, 0x09, 0xcf, 0xbc, 0x87, 0x00, 0x9c, 0x3e, 0x0b, 0x30, 0x9b, 0x3e,
    0xe4, 0x8a, 0xb3, 0xbd, 0x03, 0x04, 0x5a, 0xbc, 0x79, 0xa5, 0xc2, 0x3e, 0x66,
    0x9a, 0xa3, 0x3e, 0x8f, 0xe4, 0x70, 0xbe, 0xc4, 0x25, 0xdf, 0xbe, 0x37, 0x90,
    0xdb, 0x3e, 0x88, 0x7d, 0xdc, 0x3e, 0x82, 0xad, 0x9b, 0x3c, 0xa9, 0xad, 0xb5,
    0x3e, 0x28, 0x6e, 0xa2, 0xbd, 0xcc, 0x65, 0xd4, 0x3e, 0x5f, 0xc1, 0xc2, 0xbd,
    0x4a, 0x48, 0xb3, 0xbe, 0xbe, 0x7d, 0x12, 0xbe, 0xe7, 0x9d, 0xe8, 0xbe, 0x3a,
    0xcc, 0xc9, 0xbe, 0x80, 0xd5, 0x66, 0x3e, 0xed, 0x27, 0x15, 0x3f, 0xce, 0xda,
    0x73, 0xbe, 0x4c, 0x2a, 0x86, 0x3e, 0x15, 0x27, 0xb3, 0x3e, 0xd9, 0x2b, 0xa1,
    0x3e, 0x21, 0x4e, 0x94, 0x3e, 0x7c, 0x1b, 0x10, 0x3f, 0xd8, 0x6a, 0x4f, 0x3d,
    0x59, 0x09, 0xb5, 0xbe, 0xaf, 0x83, 0x56, 0x3e, 0xb2, 0x61, 0x80, 0x3e, 0x70,
    0x42, 0xad, 0xbe, 0x60, 0xf8, 0xbe, 0xbd, 0x29, 0xac, 0xec, 0x3e, 0xa3, 0x43,
    0x9f, 0x3e, 0x9c, 0xe8, 0xfa, 0x3e, 0x19, 0xe7, 0xb2, 0xbe, 0xf1, 0xc5, 0x92,
    0xbd, 0x62, 0x6f, 0x05, 0x3e, 0xf6, 0x90, 0x21, 0x3e, 0x90, 0x33, 0x36, 0xbe,
    0x6f, 0xe8, 0x38, 0xbe, 0x70, 0xa5, 0x2a, 0xbf, 0x00, 0x80, 0x18, 0x3d, 0x94,
    0x21, 0x72, 0xbe, 0x56, 0xaf, 0xa4, 0x3e, 0xcd, 0x84, 0x91, 0x3e, 0x30, 0x6a,
    0xd4, 0xbc, 0xd0, 0x2d, 0xd7, 0xbd, 0x34, 0x4f, 0xf3, 0xbe, 0xfa, 0xda, 0x8b,
    0xbe, 0x0d, 0x2b, 0x4b, 0xbf, 0x39, 0x8c, 0xab, 0x3d, 0x53, 0x8c, 0xe4, 0x3e,
    0x9a, 0x8d, 0x3e, 0xbf, 0x0c, 0xf4, 0xd7, 0xbe, 0xc4, 0x12, 0xe9, 0xbd, 0x51,
    0xd2, 0x8a, 0xbe, 0x5d, 0x88, 0x2e, 0x3d, 0x67, 0x54, 0xb6, 0x3e, 0x5e, 0xd5,
    0x30, 0xbe, 0xa8, 0xec, 0x77, 0xbe, 0xee, 0x9e, 0x88, 0x3e, 0x58, 0x96, 0x8f,
    0xbd, 0x52, 0x18, 0x38, 0xbe, 0xcd, 0x89, 0x60, 0x3e, 0xc4, 0x80, 0x7b, 0xbe,
    0x93, 0xaa, 0x68, 0x3d, 0x22, 0x76, 0x2f, 0xbd, 0x8a, 0xef, 0x21, 0xbe, 0x68,
    0xe8, 0x0c, 0x3c, 0x0f, 0x5f, 0x75, 0x3e, 0x00, 0xc7, 0x7b, 0x3b, 0x4e, 0x82,
    0xab, 0xbe, 0x42, 0x3f, 0x7d, 0xbe, 0x7a, 0x4d, 0xa7, 0xbe, 0x2b, 0x0a, 0x85,
    0x3e, 0xce, 0xe4, 0x07, 0x3e, 0x1a, 0x83, 0x0c, 0xbb, 0xf6, 0x28, 0x84, 0xbe,
    0x7b, 0xa4, 0xbd, 0x3e, 0x39, 0xa6, 0x13, 0xbe, 0xd0, 0xff, 0xd6, 0x3c, 0x74,
    0xaf, 0x30, 0xbe, 0x4f, 0x93, 0xda, 0xbe, 0x0d, 0x3b, 0x3c, 0xbd, 0xdc, 0x9f,
    0xba, 0xbd, 0xea, 0xc6, 0xd9, 0xbe, 0x7d, 0x0a, 0x9e, 0x3e, 0xea, 0xba, 0xae,
    0xbe, 0xfb, 0x8f, 0xd7, 0x3e, 0x38, 0xf0, 0xc6, 0xbe, 0xac, 0x5c, 0xb9, 0x3d,
    0x7a, 0x1a, 0x7e, 0xbe, 0x72, 0x23, 0x83, 0x3e, 0x45, 0xf8, 0xac, 0xbe, 0xc3,
    0xa2, 0xc6, 0x3e, 0x48, 0x1d, 0x7b, 0x3d, 0x21, 0xf1, 0xdb, 0x3e, 0x00, 0x48,
    0xc7, 0x3a, 0x90, 0x12, 0x99, 0xbd, 0x29, 0x7f, 0x3f, 0x3d, 0x3a, 0x0f, 0xcb,
    0xbe, 0x64, 0x77, 0x8c, 0x3d, 0xea, 0xac, 0x4f, 0x3e, 0x2c, 0x05, 0xc1, 0xbe,
    0x01, 0xa0, 0x54, 0xbe, 0xd1, 0x90, 0xa0, 0x3e, 0x08, 0x7a, 0x63, 0x3d, 0x7f,
    0x80, 0xf0, 0xbd, 0x13, 0x91, 0x21, 0xbe, 0x52, 0xf0, 0x93, 0xbe, 0x9c, 0xdc,
    0x9b, 0xbd, 0x09, 0xa2, 0x8d, 0xbe, 0x00, 0xf0, 0x04, 0xba, 0x7d, 0x46, 0xb8,
    0x3e, 0x78, 0xb0, 0xa2, 0xbe, 0x8f, 0x21, 0x2a, 0x3f, 0x19, 0x28, 0xdb, 0xbd,
    0x71, 0xe1, 0x03, 0xbf, 0xf3, 0x6a, 0xb2, 0x3e, 0x3a, 0xb1, 0xa6, 0xbe, 0x2a,
    0x4e, 0x29, 0xbe, 0xf9, 0x91, 0xaa, 0x3e, 0x38, 0x25, 0x98, 0xbd, 0x34, 0x36,
    0xaa, 0xbe, 0x5e, 0x58, 0x60, 0xbe, 0x4c, 0x3a, 0x4d, 0xbe, 0x2b, 0x8f, 0xa9,
    0x3e, 0xb8, 0xe2, 0xc9, 0xbd, 0x7c, 0x27, 0x86, 0xbd, 0x88, 0x85, 0x3b, 0x3d,
    0x8a, 0x40, 0x1d, 0xbe, 0x70, 0x1d, 0xc1, 0xbd, 0x07, 0xd6, 0xcc, 0x3e, 0x60,
    0x40, 0x1f, 0xbd, 0x4c, 0x9e, 0xfc, 0x3d, 0x30, 0x68, 0x80, 0x3e, 0x7c, 0xea,
    0x8a, 0xbe, 0x8f, 0xfe, 0x82, 0x3e, 0x8a, 0xe5, 0x01, 0x3e, 0x5b, 0x84, 0x1b,
    0xbe, 0x99, 0x86, 0x91, 0xbe, 0x03, 0xf9, 0x9e, 0x3e, 0x49, 0xf5, 0xb5, 0xbe,
    0xc3, 0x9f, 0x71, 0xbc, 0xc7, 0x46, 0xbf, 0x3e, 0x60, 0xc9, 0xd3, 0x3c, 0xec,
    0x0f, 0x07, 0x3d, 0x7e, 0x51, 0x30, 0xbe, 0x83, 0x7e, 0xa1, 0x3e, 0xb5, 0xc4,
    0x2f, 0xbe, 0x52, 0xdd, 0x5e, 0xbe, 0x11, 0xe7, 0x9b, 0x3e, 0x22, 0x2c, 0xf2,
    0x3d, 0xe4, 0x59, 0xd5, 0xbd, 0x88, 0x29, 0x1a, 0xbd, 0x81, 0x6a, 0x74, 0x3e,
    0x8a, 0x09, 0xa7, 0xbe, 0xb5, 0x80, 0xdd, 0x3e, 0xfa, 0xb1, 0x74, 0x3e, 0x9f,
    0x2a, 0x86, 0x3f, 0xf4, 0x6a, 0x85, 0x3d, 0x56, 0x82, 0x34, 0x3f, 0x8e, 0xfb,
    0x1f, 0xbf, 0x8e, 0x69, 0x7d, 0xbe, 0x8a, 0x22, 0xac, 0xbd, 0x33, 0xcb, 0x34,
    0x3c, 0x46, 0xbc, 0x58, 0x3e, 0x21, 0x04, 0xc7, 0xbe, 0x3c, 0x88, 0xb7, 0xbe,
    0xa0, 0xb9, 0x89, 0xbc, 0xf4, 0x32, 0x90, 0xbe, 0xeb, 0x3f, 0x3e, 0xbf, 0xca,
    0xe4, 0x5c, 0xbe, 0x99, 0xa3, 0xc7, 0x3e, 0xd4, 0x04, 0x25, 0xbe, 0x59, 0xcc,
    0x47, 0x3e, 0x35, 0xe1, 0xa6, 0xbe, 0xef, 0x05, 0x56, 0x3e, 0x1b, 0x4d, 0xa7,
    0x3e, 0xb4, 0xb0, 0x06, 0x3f, 0x84, 0x86, 0xb2, 0x3e, 0x13, 0x14, 0xea, 0xbe,
    0xb2, 0x8a, 0x16, 0x3e, 0x15, 0xca, 0xa3, 0x3d, 0x5b, 0xaf, 0x27, 0x3f, 0x0c,
    0xbf, 0x8b, 0xbe, 0x86, 0x8d, 0x0b, 0x3e, 0x56, 0x18, 0x1d, 0x3e, 0x0f, 0x6c,
    0x0a, 0xbf, 0xf4, 0x37, 0xad, 0x3d, 0x4a, 0x94, 0x66, 0x3e, 0x25, 0xc6, 0xd4,
    0x3e, 0xce, 0x16, 0x59, 0x3e, 0xcf, 0x3f, 0xa3, 0x3e, 0xb4, 0x97, 0x37, 0x3e,
    0x5f, 0x0c, 0x34, 0x3e, 0x5c, 0x26, 0x9e, 0x3e, 0x4d, 0x17, 0xe4, 0x3c, 0x97,
    0xf8, 0xc2, 0x3e, 0x93, 0x6c, 0x81, 0x3e, 0x7c, 0x4a, 0x14, 0x3e, 0x6d, 0xee,
    0xb7, 0x3e, 0x20, 0x7b, 0x2b, 0xbe, 0x66, 0xa7, 0xde, 0xbe, 0x8b, 0xe5, 0x4a,
    0xbe, 0x53, 0x29, 0xb0, 0x3e, 0x70, 0xb2, 0x58, 0x3d, 0xbb, 0x24, 0x05, 0x3f,
    0x94, 0xf2, 0x93, 0x3d, 0xd6, 0x5e, 0xaf, 0x3e, 0xa5, 0x6d, 0x4c, 0xbe, 0x43,
    0xac, 0xa8, 0x3e, 0x42, 0xfa, 0x2c, 0x3d, 0x09, 0x9b, 0xb1, 0x3e, 0xdc, 0xf8,
    0xde, 0x3d, 0x1a, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00,
    0x00, 0xc0, 0x9a, 0x02, 0x3f, 0x96, 0x50, 0xaa, 0x3e, 0xae, 0xa6, 0x37, 0xbe,
    0x4c, 0xc2, 0x90, 0xbe, 0x45, 0x1f, 0x07, 0x3f, 0xce, 0x81, 0xb1, 0x3e, 0xbd,
    0x32, 0xa3, 0xbe, 0x2a, 0xde, 0xf9, 0xbe, 0xc9, 0x5d, 0x2e, 0x3e, 0xd0, 0xab,
    0xf4, 0xbe, 0xce, 0x9f, 0xd4, 0x3e, 0x7e, 0x83, 0x22, 0x3e, 0x10, 0x53, 0x65,
    0x3e, 0xc6, 0x68, 0x69, 0x3e, 0x51, 0xd2, 0x0d, 0x3f, 0xd2, 0xdf, 0x48, 0xbe,
    0x66, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x37,
    0x12, 0xfd, 0xbe, 0x8e, 0x67, 0x70, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xaa, 0xbd, 0xb6, 0x3e, 0x55, 0x0b, 0xd7, 0x3e, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0xe4, 0x5a, 0xbf, 0x00, 0x00, 0x00, 0x00,
    0xcf, 0x26, 0x70, 0xbf, 0x0e, 0x01, 0xc8, 0x3e, 0x09, 0x6e, 0x0f, 0x3d, 0x21,
    0x0d, 0xa5, 0xbe, 0x95, 0x4c, 0x22, 0xbf, 0x00, 0x00, 0x00, 0x00, 0xb2, 0xff,
    0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xbe, 0xbb, 0x4b,
    0x3d, 0xa0, 0x84, 0xb1, 0xbc, 0x5b, 0x98, 0xeb, 0x3e, 0x51, 0x10, 0x3e, 0x3e,
    0x9e, 0x0a, 0x6b, 0xbe, 0xf6, 0xc0, 0x1a, 0x3f, 0x43, 0xd7, 0x9f, 0xbc, 0x2f,
    0x92, 0x6b, 0xbd, 0x4b, 0x28, 0x53, 0xbd, 0xd2, 0x8c, 0x07, 0x3f, 0x00, 0x00,
    0x00, 0x00, 0x19, 0x5d, 0xaa, 0xbc, 0x84, 0x99, 0xe5, 0xbe, 0xcc, 0xea, 0xd2,
    0x3e, 0x98, 0xa3, 0x94, 0xbe, 0x44, 0xbe, 0xa4, 0xbe, 0x00, 0x00, 0x06, 0x00,
    0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0xd4, 0xa3, 0x64, 0xbe, 0xe8, 0xfa, 0xff, 0xff, 0xec, 0xfa,
    0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f,
    0x6e, 0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10,
    0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00,
    0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00,
    0x00, 0xe0, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x38,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x64, 0xfb, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0xca, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xba, 0xff, 0xff,
    0xff, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0xc4, 0x03, 0x00, 0x00, 0x50,
    0x03, 0x00, 0x00, 0xdc, 0x02, 0x00, 0x00, 0x80, 0x02, 0x00, 0x00, 0x30, 0x02,
    0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0xf8, 0x00, 0x00,
    0x00, 0x60, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x7a, 0xfc, 0xff, 0xff,
    0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c,
    0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x02, 0x00,
    0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x64, 0xfc, 0xff,
    0xff, 0x19, 0x00, 0x00, 0x00, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c,
    0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61,
    0x6c, 0x6c, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xd2, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00,
    0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
    0x09, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff,
    0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0xbc, 0xfc, 0xff, 0xff, 0x55, 0x00,
    0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f,
    0x38, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x30, 0x2f, 0x4d, 0x61,
    0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
    0x61, 0x6c, 0x5f, 0x38, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x30,
    0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74,
    0x69, 0x61, 0x6c, 0x5f, 0x38, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32,
    0x30, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x66, 0xfd,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00,
    0x00, 0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x50,
    0xfd, 0xff, 0xff, 0x55, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e,
    0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f,
    0x31, 0x39, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71,
    0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x2f, 0x64, 0x65, 0x6e,
    0x73, 0x65, 0x5f, 0x31, 0x39, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65,
    0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x2f, 0x64, 0x65,
    0x6e, 0x73, 0x65, 0x5f, 0x31, 0x39, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64,
    0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x6a, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00,
    0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00,
    0x00, 0xd4, 0xfd, 0xff, 0xff, 0x1c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
    0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x2f, 0x64, 0x65, 0x6e, 0x73,
    0x65, 0x5f, 0x32, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00,
    0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0xb6, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x20,
    0xfe, 0xff, 0xff, 0x1c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e,
    0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f,
    0x32, 0x30, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02,
    0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x6c, 0xfe, 0xff,
    0xff, 0x1c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
    0x61, 0x6c, 0x5f, 0x38, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x39,
    0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
    0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4e, 0xff, 0xff,
    0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0xb8, 0xfe, 0xff, 0xff, 0x2c,
    0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c,
    0x5f, 0x38, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x39, 0x2f, 0x42,
    0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61,
    0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xa6, 0xff, 0xff, 0xff, 0x00, 0x00,
    0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x3c, 0x00, 0x00, 0x00, 0x10, 0xff, 0xff, 0xff, 0x2c, 0x00, 0x00, 0x00,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x2f,
    0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x30, 0x2f, 0x42, 0x69, 0x61, 0x73,
    0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61,
    0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x18, 0x00, 0x14, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
    0x80, 0xff, 0xff, 0xff, 0x2c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65,
    0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
    0x5f, 0x32, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52,
    0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x16, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x00, 0x00, 0x14, 0x00, 0x10, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
    0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00,
    0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72,
    0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x5f,
    0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x39, 0x5f, 0x69, 0x6e, 0x70, 0x75,
    0x74, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
};
const int sine_model_len = 3236;
