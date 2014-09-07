# Findmvimpact.cmake - Find mvimpact sdk, version >= 4.
# Modified from FindEigen.cmake by alexs.mac@gmail.com  (Alex Stewart)
#
# This module defines the following variables:
#
# MVIMPACT_FOUND: TRUE if mvimpact is found.
# MVIMPACT_INCLUDE_DIRS: Include directories for mvimpact.
# MVIMPACT_LIBRARIES: Libraries for all mvimpact component libraries and dependencies.
#
# MVIMPACT_VERSION: Extracted from lib/libmvBlueFOX .so.x.y.z
# MVIMPACT_WORLD_VERSION: Equal to 4 if MVIMPACT_VERSION = 4.0.5
# MVIMPACT_MAJOR_VERSION: Equal to 0 if MVIMPACT_VERSION = 4.0.5
# MVIMPACT_MINOR_VERSION: Equal to 5 if MVIMPACT_VERSION = 4.0.5
#
# The following variables control the behaviour of this module:
#
# MVIMPACT_INCLUDE_DIR_HINTS: List of additional directories in which to
#                             search for mvimpact includes, e.g: /foo/include.
# MVIMPACT_LIBRARY_DIR_HINTS: List of additional directories in which to
#                             search for mvimpact libraries, e.g: /bar/lib.
#
# The following variables are also defined by this module, but in line with
# CMake recommended FindPackage() module style should NOT be referenced directly
# by callers (use the plural variables detailed above instead).  These variables
# do however affect the behaviour of the module via FIND_[PATH/LIBRARY]() which
# are NOT re-called (i.e. search for library is not repeated) if these variables
# are set with valid values _in the CMake cache_. This means that if these
# variables are set directly in the cache, either by the user in the CMake GUI,
# or by the user passing -DVAR=VALUE directives to CMake when called (which
# explicitly defines a cache variable), then they will be used verbatim,
# bypassing the HINTS variables and other hard-coded search locations.
#
# MVIMPACT_INCLUDE_DIR: Include directory for mvimpact, not including the
#                       include directory of any dependencies.
# MVIMPACT_LIBRARY: mvimpact library, not including the libraries of any
#                   dependencies.

# Called if we failed to find mvimpact or any of it's required dependencies,
# unsets all public (designed to be used externally) variables and reports
# error message at priority depending upon [REQUIRED/QUIET/<NONE>] argument.
macro(MVIMPACT_REPORT_NOT_FOUND REASON_MSG)
    unset(MVIMPACT_FOUND)
    unset(MVIMPACT_INCLUDE_DIRS)
    unset(MVIMPACT_LIBRARIES)
    unset(MVIMPACT_WORLD_VERSION)
    unset(MVIMPACT_MAJOR_VERSION)
    unset(MVIMPACT_MINOR_VERSION)
    # Make results of search visible in the CMake GUI if mvimpact has not
    # been found so that user does not have to toggle to advanced view.
    mark_as_advanced(CLEAR MVIMPACT_INCLUDE_DIR)
    # Note <package>_FIND_[REQUIRED/QUIETLY] variables defined by FindPackage()
    # use the camelcase library name, not uppercase.
    if(Mvimpact_FIND_QUIETLY)
        message(STATUS "Failed to find mvimpact - " ${REASON_MSG} ${ARGN})
    elseif(Mvimpact_FIND_REQUIRED)
        message(FATAL_ERROR "Failed to find mvimpact - " ${REASON_MSG} ${ARGN})
    else()
        # Neither QUIETLY nor REQUIRED, use no priority which emits a message
        # but continues configuration and allows generation.
        message("-- Failed to find mvimpact - " ${REASON_MSG} ${ARGN})
    endif()
endmacro(MVIMPACT_REPORT_NOT_FOUND)

# Search user-installed locations first, so that we prefer user installs
# to system installs where both exist.
get_filename_component(BLUEFOX2_DIR ${CMAKE_CURRENT_SOURCE_DIR} REALPATH)
message(STATUS "current dir: " ${BLUEFOX2_DIR}/mvIMPACT/include)
list(APPEND MVIMPACT_CHECK_INCLUDE_DIRS
    /opt/mvIMPACT_acquire
    ${BLUEFOX2_DIR}/mvIMPACT/include
    )
execute_process(COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCH)
list(APPEND MVIMPACT_CHECK_LIBRARY_DIRS
    /opt/mvIMPACT_acquire/lib/${ARCH}
    ${BLUEFOX2_DIR}/mvIMPACT/lib/${ARCH}
    )
message(STATUS "current dir: " ${MVIMPACT_CHECK_INCLUDE_DIRS})

# Check general hints
if(MVIMPACT_HINTS AND EXISTS ${MVIMPACT_HINTS})
    set(MVIMPACT_INCLUDE_DIR_HINTS ${MVIMPACT_HINTS}/include)
    set(MVIMPACT_LIBRARY_DIR_HINTS ${MVIMPACT_HINTS}/lib)
endif()

# Search supplied hint directories first if supplied.
# Find include directory for mvimpact
find_path(MVIMPACT_INCLUDE_DIR
    NAMES mvIMPACT_CPP/mvIMPACT_acquire.h
    PATHS ${MVIMPACT_INCLUDE_DIR_HINTS}
    ${MVIMPACT_CHECK_INCLUDE_DIRS}
    NO_DEFAULT_PATH)
if(NOT MVIMPACT_INCLUDE_DIR OR NOT EXISTS ${MVIMPACT_INCLUDE_DIR})
    MVIMPACT_REPORT_NOT_FOUND(
        "Could not find mvimpact include directory, set MVIMPACT_INCLUDE_DIR to "
        "path to mvimpact include directory,"
        "e.g. /opt/mvIMPACT_acquire.")
else()
    message(STATUS "mvimpact include dir found: " ${MVIMPACT_INCLUDE_DIR})
endif()

# Find library directory for mvimpact
find_library(MVIMPACT_LIBRARY
    NAMES libmvBlueFOX.so
    PATHS ${MVIMPACT_LIBRARY_DIR_HINTS}
    ${MVIMPACT_CHECK_LIBRARY_DIRS}
    NO_DEFAULT_PATH)
if(NOT MVIMPACT_LIBRARY OR NOT EXISTS ${MVIMPACT_LIBRARY})
    MVIMPACT_REPORT_NOT_FOUND(
        "Could not find mvimpact library, set MVIMPACT_LIBRARY "
        "to full path to mvimpact library direcotory.")
else()
    # TODO: need to fix this hacky solution for getting MVIMPACT_LIBRARY_DIR
    string(REGEX MATCH ".*/" MVIMPACT_LIBRARY_DIR ${MVIMPACT_LIBRARY})
    message(STATUS "mvimpact library dir found: " ${MVIMPACT_LIBRARY_DIR})
endif()

# Mark internally as found, then verify. MVIMPACT_REPORT_NOT_FOUND() unsets if
# called.
set(MVIMPACT_FOUND TRUE)

# Extract mvimpact version
if(MVIMPACT_LIBRARY_DIR)
    file(GLOB MVIMPACT_LIBS
        RELATIVE ${MVIMPACT_LIBRARY_DIR}
        ${MVIMPACT_LIBRARY_DIR}/libmvBlueFOX.so.[0-9].[0-9].[0-9])
    # TODO: add version support
    # string(REGEX MATCH ""
    #       MVIMPACT_WORLD_VERSION ${MVIMPACT_PVBASE})
    # message(STATUS "mvimpact world version: " ${MVIMPACT_WORLD_VERSION})
endif()

# Catch case when caller has set MVIMPACT_INCLUDE_DIR in the cache / GUI and
# thus FIND_[PATH/LIBRARY] are not called, but specified locations are
# invalid, otherwise we would report the library as found.
if(MVIMPACT_INCLUDE_DIR AND NOT EXISTS ${MVIMPACT_INCLUDE_DIR}/mvIMPACT_CPP/mvIMPACT_acquire.h)
    MVIMPACT_REPORT_NOT_FOUND("Caller defined MVIMPACT_INCLUDE_DIR: "
        ${MVIMPACT_INCLUDE_DIR}
        " does not contain mvIMPACT_CPP/mvIMPACT_acquire.h header.")
endif()

# Set standard CMake FindPackage variables if found.
if(MVIMPACT_FOUND)
    set(MVIMPACT_INCLUDE_DIRS ${MVIMPACT_INCLUDE_DIR})
    file(GLOB MVIMPACT_LIBRARIES ${MVIMPACT_LIBRARY_DIR}lib*.so)
endif()

# Handle REQUIRED / QUIET optional arguments.
include(FindPackageHandleStandardArgs)
if(MVIMPACT_FOUND)
    FIND_PACKAGE_HANDLE_STANDARD_ARGS(Mvimpact DEFAULT_MSG
        MVIMPACT_INCLUDE_DIRS MVIMPACT_LIBRARIES)
endif()

# Only mark internal variables as advanced if we found mvimpact, otherwise
# leave it visible in the standard GUI for the user to set manually.
if(MVIMPACT_FOUND)
    mark_as_advanced(FORCE MVIMPACT_INCLUDE_DIR MVIMPACT_LIBRARY)
endif()
