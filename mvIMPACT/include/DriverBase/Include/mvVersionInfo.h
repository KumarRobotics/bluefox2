//-----------------------------------------------------------------------------
#ifndef mvVersionInfoH
#ifndef DOXYGEN_SHOULD_SKIP_THIS
#   define mvVersionInfoH mvVersionInfoH
#endif // #ifndef DOXYGEN_SHOULD_SKIP_THIS
//-----------------------------------------------------------------------------

#if !defined(mvDriverBaseEnumsH) && !defined(SWIG)
#   error "This file must NOT be included directly! Include mvDeviceManager.h(C-API) or mvIMPACT_acquire.h(C++ API) instead"
#endif // #if !defined(mvDriverBaseEnumsH) && !defined(SWIG)

#define MVIMPACT_ACQUIRE_MAJOR_VERSION   2
#define MVIMPACT_ACQUIRE_MINOR_VERSION   27
#define MVIMPACT_ACQUIRE_RELEASE_VERSION 0
#define MVIMPACT_ACQUIRE_BUILD_VERSION   2430
#define MVIMPACT_ACQUIRE_VERSION_STRING  "2.27.0.2430"

/// \brief This is a macro which evaluates to true if the current mvIMPACT Acquire version is at least major.minor.release.
/**
 * For example, to test if the program will be compiled with mvIMPACT Acquire 2.0 or higher, the following can be done:
 *
 * \code
 * HDISP hDisp = getDisplayHandleFromSomewhere();
 * #if MVIMPACT_ACQUIRE_CHECK_VERSION(2, 0, 0)
 *   mvDispWindowDestroy( hDisp );
 *  #else // replacement code for old version
 *    mvDestroyImageWindow( hDisp );
 *  #endif
 * \endcode
 *
 *  \since 2.0.0
 */
#define MVIMPACT_ACQUIRE_CHECK_VERSION(MAJOR, MINOR, RELEASE) \
    (MVIMPACT_ACQUIRE_MAJOR_VERSION > (MAJOR) || \
    (MVIMPACT_ACQUIRE_MAJOR_VERSION == (MAJOR) && MVIMPACT_ACQUIRE_MINOR_VERSION > (MINOR)) || \
    (MVIMPACT_ACQUIRE_MAJOR_VERSION == (MAJOR) && MVIMPACT_ACQUIRE_MINOR_VERSION == (MINOR) && MVIMPACT_ACQUIRE_RELEASE_VERSION >= (RELEASE)))

#endif // mvVersionInfoH
