

// qt_zlib_compression_routines.hpp
// to include ->  #include "qt_zlib_compression_routines.hpp"
// 2018 Feb 12

#ifndef qt_zlib_compression_routines_hpp
#define qt_zlib_compression_routines_hpp

#include <qt_zlib_compress_decompress_common.hpp>

namespace qt{

bool CompressFileOrFolder(const QString& a_fileOrFolderPath, const QString& targetFilePath, int a_compressionLevel);
bool DecompressFile(const QString& a_foldePath, const QString& targetFilePath, int a_compressionLevel);

}




#endif  // #ifndef qt_zlib_compression_routines_hpp
