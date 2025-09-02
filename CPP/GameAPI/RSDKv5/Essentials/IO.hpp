#pragma once

#include "../Types.hpp"
#include "../EngineAPI.hpp"

namespace RSDK
{
#if RETRO_MOD_LOADER_VER >= 3
namespace IO
{
enum IOSeekWhence {
    IOSEEK_SET = 0, /* Seek from beginning of file. */
    IOSEEK_CUR = 1, /* Seek from current position. */
    IOSEEK_END = 2  /* Seek from end of file. */
};

inline IOHandle Open(const char *filename, const char *mode) {
    return modTable->IOOpen(filename, mode);
}

inline uint32 Read(void *buffer, uint32 elementSize, uint32 elementCount, IOHandle file) {
    return modTable->IORead(buffer, elementSize, elementCount, file);
}

inline int32 Seek(IOHandle file, int32 offset, int32 whence) {
    return modTable->IOSeek(file, offset, whence);
}

inline int32 Tell(IOHandle file) {
    return modTable->IOTell(file);
}

inline int32 Close(IOHandle file) {
    return modTable->IOClose(file);
}

inline uint32 Write(const void *buffer, uint32 elementSize, uint32 elementCount, IOHandle file) {
    return modTable->IOWrite(buffer, elementSize, elementCount, file);
}

} // namespace IO
#endif

} // namespace RSDK