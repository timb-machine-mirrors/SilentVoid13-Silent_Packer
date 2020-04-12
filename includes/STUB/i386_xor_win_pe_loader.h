//
// Created by silentvoid on 4/2/20.
// Copyright (c) 2020 SilentVoid. All rights reserved.
//

#ifndef SILENT_PACKER_I386_XOR_WIN_PE_LOADER_H
#define SILENT_PACKER_I386_XOR_WIN_PE_LOADER_H

#define I386_XOR_WIN_PE_LOADER_INFOS_SIZE 16
#define I386_XOR_WIN_PE_LOADER_SIZE 124

#ifndef NO_PAYLOAD
unsigned char i386_xor_win_pe_loader_stub[] = {
        0x50, 0x57, 0x56, 0x54, 0x52, 0x51, 0x53, 0xe8, 0x21, 0x00, 0x00, 0x00, 0x83, 0xea, 0x32, 0x89,
        0xd3, 0xe8, 0x17, 0x00, 0x00, 0x00, 0x83, 0xea, 0xba, 0x2b, 0x1a, 0xeb, 0x17, 0x5b, 0x55, 0x6e,
        0x70, 0x61, 0x63, 0x6b, 0x69, 0x6e, 0x67, 0x2e, 0x2e, 0x2e, 0x5d, 0x0a, 0x00, 0xe8, 0x00, 0x00,
        0x00, 0x00, 0x5a, 0xc3, 0xe8, 0xf4, 0xff, 0xff, 0xff, 0x83, 0xea, 0xc2, 0x8b, 0x02, 0xe8, 0xea,
        0xff, 0xff, 0xff, 0x83, 0xea, 0xbe, 0x8b, 0x0a, 0xe8, 0xe0, 0xff, 0xff, 0xff, 0x83, 0xea, 0xc6,
        0x8b, 0x12, 0x01, 0xd8, 0x01, 0xc1, 0x30, 0x10, 0xc1, 0xca, 0x04, 0x40, 0x39, 0xc8, 0x75, 0xf6,
        0x5b, 0x59, 0x5a, 0x5c, 0x5e, 0x5f, 0x58, 0xe9, 0xfb, 0xff, 0xff, 0x0f, 0xaa, 0xaa, 0xaa, 0xaa,
        0xbb, 0xbb, 0xbb, 0xbb, 0xcc, 0xcc, 0xcc, 0xcc, 0xdd, 0xdd, 0xdd, 0xdd
};
#endif // NO_PAYLOAD

#endif //SILENT_PACKER_I386_XOR_WIN_PE_LOADER_H
