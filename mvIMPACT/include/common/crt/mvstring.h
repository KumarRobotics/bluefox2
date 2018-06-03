//-----------------------------------------------------------------------------
#ifndef mvstringH
#define mvstringH mvstringH
//-----------------------------------------------------------------------------
#include <errno.h>
#include <string.h>

//-----------------------------------------------------------------------------
/// \brief Version that mimics the C11 \c strncpy_s function.
/**
 * See \c strncpy_s of your runtime implementation for documentation!
 */
inline int mv_strncpy_s( char* pDst, const char* pSrc, size_t bufSize )
//-----------------------------------------------------------------------------
{
#if (defined(_MSC_VER) && (_MSC_VER >= 1400)) || defined (__STDC_LIB_EXT1__) // is at least VC 2005 compiler OR implementation supports CRT extensions?
    return strncpy_s( pDst, bufSize, pSrc, _TRUNCATE );
#else
    strncpy( pDst, pSrc, bufSize );
    return errno;
#endif // #if (defined(_MSC_VER) && (_MSC_VER >= 1400)) || defined (__STDC_LIB_EXT1__) // is at least VC 2005 compiler OR implementation supports CRT extensions?
}

//-----------------------------------------------------------------------------
/// \brief Version that mimics the C11 \c strerror_s function.
/**
 * See \c strerror_s of your runtime implementation for documentation!
 */
inline int mv_strerror_s( char* pBuf, size_t bufSize, int errnum )
//-----------------------------------------------------------------------------
{
#if (defined(_MSC_VER) && (_MSC_VER >= 1400)) || defined (__STDC_LIB_EXT1__) // is at least VC 2005 compiler OR implementation supports CRT extensions?
    return strerror_s( pBuf, bufSize, errnum );
#else
    // Should check the following constraints here:
    // - pBuf is a null pointer
    // - bufSize is zero or greater than RSIZE_MAX
    strncpy( pBuf, strerror( errnum ), bufSize );
    return errno;
#endif // #if (defined(_MSC_VER) && (_MSC_VER >= 1400)) || defined (__STDC_LIB_EXT1__) // is at least VC 2005 compiler OR implementation supports CRT extensions?
}

//-----------------------------------------------------------------------------
inline size_t mv_strerrorlen_s( int errnum )
//-----------------------------------------------------------------------------
{
#ifdef __STDC_LIB_EXT1__ // does implementation supports CRT extensions?
    return strerrorlen_s( errnum );
#else
#   ifdef _MSC_VER // is Microsoft compiler?
#       pragma warning( push )
#       pragma warning( disable : 4996 ) // ''strerror': This function or variable may be unsafe. Consider using strerror_s instead-'
#   endif // #ifdef _MSC_VER
    return strlen( strerror( errnum ) );
#   ifdef _MSC_VER // is Microsoft compiler?
#       pragma warning( pop )
#   endif // #ifdef _MSC_VER
#endif // #ifdef __STDC_LIB_EXT1__ // does implementation supports CRT extensions?
}

#endif // mvstringH
