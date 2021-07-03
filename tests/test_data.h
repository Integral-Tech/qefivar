
#define TEST_BOOT_DATA_LENGTH 150
const unsigned char test_boot_data[TEST_BOOT_DATA_LENGTH] = {
    0x01, 0x00, 0x00, 0x00,     // Attribute
    0x68, 0x00,                 // Device Path List length
    // Description
    0x72, 0x00, 0x45, 0x00, 0x46, 0x00, 0x49, 0x00, 0x6e, 0x00, 0x64, 0x00,
    0x20, 0x00, 0x42, 0x00, 0x6f, 0x00, 0x6f, 0x00, 0x74, 0x00, 0x20, 0x00,
    0x4d, 0x00, 0x61, 0x00, 0x6e, 0x00, 0x61, 0x00, 0x67, 0x00, 0x65, 0x00,
    0x72, 0x00, 0x00, 0x00,

    // Device Path Header
    0x04,           // Type
    0x01,           // Subtype
    0x2a, 0x00,     // Length
    // MEDIA, Hard Disk type:
    // uint32_t	partition_number;
    0x02, 0x00, 0x00, 0x00,
    // uint64_t	start;
    0x00, 0xa0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
	// uint64_t	size;
    0x00, 0x20, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
    // uint8_t		signature[16];
    0xd5, 0xdf, 0x32, 0x86, 0x0f, 0x91, 0x3d, 0x4b, 0xb2, 0x50, 0x2c, 0x7f, 0x17, 0x44, 0x15, 0x45,
    // uint8_t		format;
    0x02,   // GPT
    // uint8_t		signature_type;
    0x02,   // GUID
    // File Device Path Header
    0x04,           // Type
    0x04,           // Subtype
    0x3a, 0x00,     // Length
    0x5c, 0x00, 0x45, 0x00, 0x46, 0x00, 0x49, 0x00, 0x5c, 0x00, 0x72, 0x00,
    0x65, 0x00, 0x66, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x64, 0x00, 0x5c, 0x00,
    0x72, 0x00, 0x65, 0x00, 0x66, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x64, 0x00,
    0x5f, 0x00, 0x78, 0x00, 0x36, 0x00, 0x34, 0x00, 0x2e, 0x00, 0x65, 0x00,
    0x66, 0x00, 0x69, 0x00, 0x00, 0x00,
    // End Device Path Header
    0x7f,           // Type
    0xff,           // Subtype
    0x04, 0x00      // Length
};

const char* test_boot_name = "rEFInd Boot Manager";