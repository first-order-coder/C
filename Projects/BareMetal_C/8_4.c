#include <stdint.h>

struct IPV4Header
{
    uint8_t versionAndIHL;
    uint8_t dscpAndECN;

    uint16_t totalLength;
    uint16_t identification;
    uint16_t flagsAndFragmentOffset;

    uint8_t timeToLive;
    uint8_t protocol;

    uint16_t headerChecksum;

    uint32_t sourceIPAddress;
    uint32_t destinationIPAddress;
};